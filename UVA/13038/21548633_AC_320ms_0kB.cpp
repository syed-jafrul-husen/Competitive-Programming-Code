#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool visit[100005];
vector<ll>grp[100005];
ll indeg[100005];
ll level[100002];

ll dfs(ll u)
{
    ll c = 1;
    ll sz =grp[u].size();
    for (ll i=0; i<sz; i++)
    {
        ll v = grp[u][i];
        c = max(c, dfs(v)+1);
    }
    return c;
}

int main()
{
    ll e,u,v,i,j,t,x,te=0,n;
    cin>>t;
    while(t--)
    {
        ++te;
        cin>>n>>e;
        for(i=0; i<=n; i++)
        {
            grp[i].clear();
            visit[i] = false;
            indeg[i] = 0;
        }
        while(e--)
        {
            cin>>u>>v;
            grp[u].push_back(v);
            indeg[v] = 1;
        }
        ll mx = 1;
        for(i=1; i<=n; i++)
        {
            if(indeg[i]==0)
            {

                // cout<<i<<" "<<c<<endl;
                mx = max(mx,dfs(i));
            }
        }
        printf("Case %lld: %lld\n",te,mx);
    }
}
