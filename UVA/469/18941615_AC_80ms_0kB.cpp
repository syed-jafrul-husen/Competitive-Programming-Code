#include<bits/stdc++.h>
using namespace std;
int ans=0;
char grid[501][501];
int visit[501][501],grid2[501][501];
int m,n;

void DFS(int r, int c)
{
    if (r<0 || r>=n)
        return;
    if (c<0 || c>=m)
        return;
    if (visit[r][c]==1)
        return;
    visit[r][c] = 1;
    if(grid[r][c]=='L')
        return;
    if(grid[r][c]=='W')
        ans++;
    DFS(r+1, c);
    DFS(r-1, c);
    DFS(r, c+1);
    DFS(r, c-1);

    DFS(r+1, c+1);
    DFS(r+1, c-1);
    DFS(r-1, c+1);
    DFS(r-1, c-1);
}

void DFS2(int r, int c)
{
    if (r<0 || r>=n)
        return;
    if (c<0 || c>=m)
        return;
    if (visit[r][c]==1)
        return;
    visit[r][c] = 1;
    if(grid[r][c]=='L')
    {
        grid2[r][c] = 0;
        return;
    }

    grid2[r][c] =ans;
    DFS(r+1, c);
    DFS(r-1, c);
    DFS(r, c+1);
    DFS(r, c-1);

    DFS(r+1, c+1);
    DFS(r+1, c-1);
    DFS(r-1, c+1);
    DFS(r-1, c-1);
}

int main()
{
    int t,q,i,j,k;
    scanf("%d",&t);
    getchar();
    getchar();
    for(i=1; i<=t; i++)
    {
        string str;
        for(j=0; j<101; j++)
        {
            for(k=0; k<101; k++)
            {
                grid2[j][k] = -1;
            }
        }
        n = 0;
        while(getline(cin,str))
        {
            if(str.size()==0)
            {
                break;
            }

            if(str[0]=='L' || str[0]=='W')
            {
                m = str.size();
                for(k=0; k<m; k++)
                    grid[n][k] = str[k];
                ++n;
            }
            else
            {

                int sz=str.size();
                int s = 0,s2 = 0;
                for(j=0; j<sz; j++)
                {
                    if(str[j]!=' ')
                    {
                        s*=10;
                        s = s+str[j]-'0';
                    }
                    else
                        break;
                }
                for(k=j+1; k<sz; k++)
                {
                    s2*=10;
                    s2 = s2+str[k]-'0';
                }
                //cout<<str<<endl;
                //cout<<s<<" "<<s2<<endl;

                if(grid2[s-1][s2-1]!=-1)
                    printf("%d\n",grid2[s-1][s2-1]);
                else
                {
                    for(j=0; j<101; j++)
                    {
                        for(k=0; k<101; k++)
                        {
                            visit[j][k] = 0;
                        }
                    }
                    ans=0;
                    DFS(s-1,s2-1);
                    for(j=0; j<101; j++)
                    {
                        for(k=0; k<101; k++)
                        {
                            visit[j][k] = 0;
                        }
                    }
                    DFS2(s-1,s2-1);
                    printf("%d\n",grid2[s-1][s2-1]);
                }
            }
        }
        if(i<t)
       printf("\n");
    }
    return 0;
}
