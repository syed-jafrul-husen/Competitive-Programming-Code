#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<bool>visit;
vector<ll>grp[100005];
ll level[1005];
ll total=0;
ll n;
void bfs(ll u)
{
    ll frnt,i,sz;
    queue<ll>q;
    q.push(u);
    level[u] = 0;
    visit[u] = true;
    while(!q.empty())
    {
        frnt = q.front();
        q.pop();
        sz = grp[frnt].size();
        for(i=0; i<sz; i++)
        {
            if(!visit[grp[frnt][i]])
            {
                level[grp[frnt][i]] = level[frnt]+1;
                ++total;
                q.push(grp[frnt][i]);
                visit[grp[frnt][i]] = true;
            }
        }
    }
}
int main()
{
    ll e,u,v,i,j,t,x,q,m,s,k;
    scanf("%lld%lld%lld",&n,&m,&k);
    for(i=0; i<m; i++)
    {
        scanf("%lld%lld",&u,&v);
        grp[u].push_back(v);
    }
    x = 99999999;
    for(i=1; i<=n; i++)
    {
        visit.assign(n+2,false);
        memset(level,0,sizeof(level));
        total = 0;
        bfs(i);

        x = min(x,total);

    }
    ++x;
    printf("%lld\n",x*k);
}
