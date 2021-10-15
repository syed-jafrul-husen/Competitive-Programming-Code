#include <bits/stdc++.h>
using namespace std;
int cnt, row, col;
char s[505][505];
int ans[505][505];
int visit[505][505];
void dfs(int r, int c)
{
    if (r<0 || r >=row)
        return;
    if (c<0 || c>=col)
        return;
    if (visit[r][c] == 1)
        return;
    visit[r][c] = 1;
    if (s[r][c] == '#')
        return;
    if (s[r][c] == 'C') cnt++;
    dfs(r+1,c);
    dfs(r-1,c);
    dfs(r,c+1);
    dfs(r,c-1);
}
void DFS2(int r, int c)
{
    if (r<0 || r>=row)
        return;
    if (c<0 || c>=col)
        return;
    if (visit[r][c] == 1)
        return;
    visit[r][c] = 1;
    if (s[r][c] == '#')
    {
        ans[r][c] = 0;
        return;
    }
    ans[r][c] = cnt;
    DFS2(r+1, c);
    DFS2(r-1, c);
    DFS2(r, c+1);
    DFS2(r, c-1);
}
int main ()
{
    int q,x,y,k,t,i,j;
    scanf (" %d",&t);
    for(k=1; k<=t; k++)
    {
        scanf (" %d %d %d",&row,&col,&q);
        for (i=0; i<row; i++)
        {
            for (j=0; j<col; j++)
            {
                scanf(" %c",&s[i][j]);
            }
        }
        for (i=0; i<row; i++)
        {
            for (j=0; j<col; j++)
            {
                ans[i][j] = -1;
            }

        }

        printf ("Case %d:\n",k);
        while (q--)
        {
            scanf (" %d %d",&x,&y);
            if (ans[x-1][y-1] != -1)
                printf ("%d\n",ans[x-1][y-1]);
            else
            {
                cnt = 0;
                for (i = 0; i < row; i++)
                    for (j=0; j<col; j++)
                        visit[i][j] = 0;

                dfs(x-1, y-1);
                for (i=0; i<row; i++)
                    for (j=0; j<col; j++)
                        visit[i][j] = 0;
                DFS2(x-1,y-1);
                printf("%d\n",ans[x-1][y-1]);
            }
        }
    }
    return 0;
}
