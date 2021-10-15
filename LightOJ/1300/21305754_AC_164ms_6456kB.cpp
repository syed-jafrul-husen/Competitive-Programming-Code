
#include<bits/stdc++.h>
using namespace std;

int low[10005],vis[100005],d[10005],parent[10005];
int disc[10005],isBridge[10005];
int tim = 0;
vector<int>adj[100005];
int ans = 0,cnt=0,cycle;


void TarjanDFS(int u,int fa)
{
    int i;
    disc[u] = low[u] = ++tim;
    int  sz = adj[u].size();
    for (int i = 0; i<sz; ++i)
    {
        int v = adj[u][i];
        if (!disc[v])//!disc[v]
        {
            parent[v] = u;
            TarjanDFS(v,u);
            low[u] = min(low[u], low[v]);
            if(low[v] > disc[u] && v!=-1)
            {
                isBridge[v] = 1;
                //cout<<u<<" "<<v<<endl;
            }
        }
        else if(v != fa)
            low[u] = min(low[u], disc[v]);
    }
}

void dfs(int x,int prnt,int cst)
{
    ++cnt;
    d[x] = cst;
    int sz = adj[x].size();
    vis[x] = 1;
    for(int i=0; i<sz; i++)
    {
        int u = adj[x][i];
        if( (isBridge[x] && parent[x]==u) || (isBridge[u] && parent[u]==x) )
            continue;
        if(vis[u]==0)
            dfs(u,x,cst+1);
        else if(vis[u]==1 && (d[u]-d[x])%2==0)
            cycle = 1;
    }
}


int main()
{
    int t,i=0,j,n,e,u,v,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&e);
        ans = 0;
        for(j=0; j<=n; j++)
        {
            isBridge[j] = 0;
            tim = 0;
            low[j] = 0;
            disc[j] = 0;
            vis[j] = 0;
            d[j] = 0;
        }

        for(j=0; j<e; j++)
        {
            scanf("%d%d",&u,&v);
                adj[u].push_back(v);
                adj[v].push_back(u);
        }
        for (j=0; j<n; j++)
            if (!disc[j])
                TarjanDFS(j,-1);
        ++i;
        for(j=0; j<n; j++)
        {
            if(vis[j])
                continue;
            cnt = 0; cycle = 0;
            dfs(j,-1,1);
            if(cycle)
                ans+=cnt;
        }
        printf("Case %d: %d\n",i,ans);

        for(j=0; j<n; j++)
        {
            adj[j].clear();
        }
    }
}
