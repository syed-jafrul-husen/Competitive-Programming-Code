#include<bits/stdc++.h>
using namespace std;

vector<int>grp[35];
int level[100];
int visit[100];

void bfs(int s)
{
    int frnt,i,sz;
    queue<int>q;
    q.push(s);
    level[s] = 0;
    visit[s] = 1;
    while(!q.empty())
    {
        frnt = q.front();
        q.pop();
        sz = grp[frnt].size();
        for(i=0; i<sz; i++)
        {
            int d = grp[frnt][i];
            if(!visit[d])
            {
                level[d] = level[frnt]+1;
                q.push(d);
                visit[d] = 1;
            }
        }
    }
}

int main()
{
    int i,j,u,s,d,s1,s2,t=0,v,tc=0;

    while(1)
    {
        //++tc;
        cin>>t;
        if(t==0)
            break;
        int c = 0;
        map<int,int>mp;
        while(t--)
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
            grp[mp[u]].push_back(mp[v]);
            grp[mp[v]].push_back(mp[u]);
        }
        while(1)
        {
            cin>>u>>v;
            if(u==0 && v==0)
                break;
            for(i=0; i<40; i++)
            {
                visit[i] = 0;
                level[i] = 0;
            }
            bfs(mp[u]);
            int ans=0;
            for(i=1; i<=c; i++)
            {
                if(level[i]>v || !visit[i])
                    ++ans;
            }
            ++tc;
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",tc,ans,u,v);
            //cout<<ans<<endl;
        }
        for(i=1; i<=c; i++)
            grp[i].clear();
    }

    return 0;
}