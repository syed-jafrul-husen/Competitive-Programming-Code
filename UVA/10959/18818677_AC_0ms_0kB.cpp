#include <bits/stdc++.h>
using namespace std;

int level[100000],n;
int visit[10000][10000];

void bfs(int u)
{
    int i,v,frnt;
    queue<int>q;
    q.push(u);
    while (!q.empty())
    {
        frnt = q.front();
        q.pop();
        for(i=1; i<n; i++)
        {
            if (visit[i][frnt]==1 && level[i] == -1)
            {
                level[i] = level[frnt]+1;
                q.push(i);
            }
        }
    }
}

int main()
{
    int m,t;
    int i, j;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        scanf("%d%d",&n,&m);
        for (i=0; i<n; i++)
        {
            for (j=0; j<n; j++)
            {
                visit[i][j] = 0;
            }
            level[i] = -1;
        }
        for (i=0; i<m; i++)
        {
            int a, b;
            scanf("%d%d",&a,&b);
            visit[a][b] = 1;
            visit[b][a] = 1;
        }
        level[0] = 0;
        bfs(0);
        for (i=1; i<n; i++)
        {
            printf("%d\n", level[i]);
        }
        if(t>0)
        printf("\n");
    }
}
