#include<bits/stdc++.h>
using namespace std;

#define N 100005
#define root -1

int parent[N],low[N],disc[N],Time,cnt;
bool visited[N],ap[N];

vector<int>adj[N];

void TarjanDFS(int u)
{
    int i,sz,children=0,v;
    visited[u] = true;
    disc[u] = low[u] = ++Time;
    sz = adj[u].size();
    for(i=0; i<sz; i++)
    {
        v = adj[u][i];
        if(!visited[v])
        {
            ++children;
            parent[v] = u;
            TarjanDFS(v);
            low[u] = min(low[u],low[v]);
            if(parent[u]==root &&children>1)
                ap[u] = true;
            if(parent[u]!=root && low[v]>=disc[u])
                ap[u] = true;
        }
        else if(v!=parent[u])
            low[u] = min(low[u],disc[v]);
    }
}

int main()
{
    int t,i,u,v,j,n,m,e,te=0;
    scanf("%d",&t);
    while(t--)
    {
        ++te;
        scanf("%d%d",&n,&e);
        for(i=0;i<=n; i++)
        {
            ap[i] = visited[i] = false;
            parent[i] = root;
        }
        while(e--)
        {
            scanf("%d%d",&u,&v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Time = 0;cnt = 0;
        for(i=1; i<=n; i++)
            if(!visited[i])
                TarjanDFS(i);
        for(i=1; i<=n; i++)
            if(ap[i]==true)
                ++cnt;
        printf("Case %d: %d\n",te,cnt);
        for(i=0; i<=n; i++)
            adj[i].clear();
    }
}
