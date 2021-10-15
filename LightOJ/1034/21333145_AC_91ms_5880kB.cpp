#include<bits/stdc++.h>
using namespace std;
 
int white = 0;
int grey = 1;
int black = -1;
int mark = 0;
vector<int>vt[100005];
 
int color[100005];
stack<int>stk;
 
void dfs(int s)
{
    color[s] = grey;
    int sz = vt[s].size();
    for(int i=0; i<sz; i++)
    {
        int v = vt[s][i];
        if(color[v]==white)
            dfs(v);
    }
    stk.push(s);
}
 
void dfs2(int s)
{
    color[s] = grey;
    int sz = vt[s].size();
    for(int i=0; i<sz; i++)
    {
        int v = vt[s][i];
        if(color[v]==white)
            dfs2(v);
    }
}
 
int main()
{
    int n,e,u,v,i,j,t;
    scanf("%d",&t);
    for(j=0; j<t; j++)
    {
        scanf("%d%d",&n,&e);
 
        for(i=0; i<=n; i++)
            color[i] = white;
        for(i=0; i<e; i++)
        {
            scanf("%d%d",&u,&v);
            vt[u].push_back(v);
        }
        for(i=1; i<=n; i++)
        {
            if(!color[i])
                dfs(i);
        }
        for(i=0; i<=n; i++)
            color[i] = white;
        mark = 0;
        while(!stk.empty())
        {
            u = stk.top();
            stk.pop();
            if(color[u]==white)
            {
                mark+=1;
                dfs2(u);
            }
        }
 
        printf("Case %d: %d\n",j+1,mark);
        for(i=0; i<=n; i++)
            vt[i].clear();
    }
}
 