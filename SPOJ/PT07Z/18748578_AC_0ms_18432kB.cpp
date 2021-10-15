#include<bits/stdc++.h>
using namespace std;
vector<int>vt[100000+2];
int level[10000+2];
int visited[100000+2];

void BFS(int s)
{
    visited[s] = 1;
    queue<int>Q;
    Q.push(s);
    while(!Q.empty())
    {
        int u = Q.front(),i;
        Q.pop();
        int sz = vt[u].size();
        //cout<<sz<<endl;
        for(i=0; i<sz; i++)
        {
            int v = vt[u][i];
            if(!visited[v])
            {
                visited[v] = 1;
                level[v] = level[u]+1;
                Q.push(v);
            }
        }
    }
}



int main()
{
    int n,i,j,u,v,c=0,x;
    scanf("%d",&n);
    for(i=0; i<n-1; i++)
    {
        scanf("%d%d",&u,&v);
        vt[u].push_back(v);
        vt[v].push_back(u);
    }
    BFS(1);
    for(i=1; i<=n; i++)
    {
        if(c<level[i])
        {
            c = level[i];
            x = i;
        }
    }

        memset(visited,0,sizeof(visited));
        memset(level,0,sizeof(level));

        BFS(x);
        sort(level,level+n+1);
        c = max(c,level[n]);



    printf("%d\n",c);
}
