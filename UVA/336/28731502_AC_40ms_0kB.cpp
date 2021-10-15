#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<ll>vt[40];
ll level[40];
bool vis[40];

void BFS(ll s)
{
    ll v,i,j,frnt;
    queue<ll>q;
    q.push(s);
    vis[s] = true;
    level[s] = 0;

    while(!q.empty())
    {
        frnt = q.front();
        q.pop();

        ll sz = vt[frnt].size();
        for(i=0; i<sz; i++)
        {
            v = vt[frnt][i];
            if(vis[v]==false)
            {
                vis[v] = true;
                level[v] = level[frnt]+1;
                q.push(v);
            }
        }
    }

}

int main()
{
    ll n,m,i,j,k,u,v,tc=1;
    while(1)
    {
        ll c= 0;
        cin>>n;
        map<ll,ll>mp,mp2;
        for(i=0; i<40; i++)
            vt[i].clear();
        if(n==0)
            break;
        for(i=0; i<n; i++)
        {
            cin>>u>>v;
            if(mp[u]==0)
            {
                ++c;
                mp[u] = c;
            }
            if(mp[v]==0)
            {
                ++c;
                mp[v] = c;
            }
            vt[mp[u]].push_back(mp[v]);
            vt[mp[v]].push_back(mp[u]);
        }
        while(1)
        {
            cin>>u>>k;
            if(u==0 && k==0)
                break;
            for(i=0; i<40; i++)
            {
                level[i] = 0;
                vis[i] = false;
            }
            BFS(mp[u]);
            ll cnt = 0;
            for(i=1; i<=c; i++)
            {
                if(level[i]>k || vis[i]==0)
                {
                    ++cnt;
                    //cout<<i<<" "<<level[i]<<endl;
                }

            }
            printf("Case %lld: %lld nodes not reachable from node %lld with TTL = %lld.\n",tc,cnt,u,k);
            ++tc;
        }
    }
}
