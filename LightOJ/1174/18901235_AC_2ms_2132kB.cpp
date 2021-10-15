#include<bits/stdc++.h>
using namespace std;
int vt[105][105];
int level[105],temp[105],visit[105];


void bfs1(int s,int sz)
{
    int i;
    level[s] = 0;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int frnt = q.front();
        q.pop();
        for(i=0; i<sz; i++)
        {
            if(vt[frnt][i]==1 && level[i]==0 && i!=s)
            {
                level[i] = level[frnt]+1;
                q.push(i);
            }
        }
    }
}

void bfs2(int s,int sz)
{
    int i;
    temp[s] = 0;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int frnt = q.front();
        q.pop();
        for(i=0; i<sz; i++)
        {
            if(vt[frnt][i]==1 && temp[i]==0 && i!=s)
            {
                temp[i] = temp[frnt]+1;
                q.push(i);
            }
        }
    }
}

int main()
{
    int t,n,e,u,v,i,j,k,s,d;
    cin>>t;
    for(i=1; i<=t; i++)
    {

        int ans=0;
        cin>>n>>e;
        for(j=0; j<e; j++)
        {
            cin>>u>>v;
            vt[u][v] = 1;
            vt[v][u] = 1;
        }

        cin>>s>>d;
        bfs1(s,n);
        bfs2(d,n);
        for(j=0; j<n; j++)
        {
            int tc = level[j]+temp[j];
            ans = max(ans,tc);
        }
        printf("Case %d: %d\n",i,ans);

        memset(level,0,sizeof(level));
        memset(temp,0,sizeof(temp));

        memset(vt,0,sizeof(vt));
    }
}
