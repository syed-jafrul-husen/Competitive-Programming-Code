#include<bits/stdc++.h>
using namespace std;

char ch[505][505];
int vis[505][505];
int n,m,k;
int dx[]= {1,-1,0,0};
int dy[]= {0,0,-1,1};
void dfs(int x,int y)
{
    if(x<0 || y<0 || x>=n || y>=m || ch[x][y]!='@' || vis[x][y]==1)
        return;
    //vis[x][y] = 1;

    vis[x][y] = 1;
    if(ch[x+1][y]=='@')
    {
        //vis[x+1][y] = 1;
        dfs(x+1,y);

    }
    if(ch[x-1][y]=='@')
        dfs(x-1,y);
    if(ch[x][y+1]=='@')
        dfs(x,y+1);
    if(ch[x][y-1]=='@')
        dfs(x,y-1);
    if(ch[x+1][y+1]=='@')
        dfs(x+1,y+1);
    if(ch[x+1][y-1]=='@')
        dfs(x+1,y-1);
    if(ch[x-1][y+1]=='@')
        dfs(x-1,y+1);
    if(ch[x-1][y-1]=='@')
        dfs(x-1,y-1);

}

int main()
{
    int i,j,u,s,d,s1,s2,t=0;

    while(1)
    {
        cin>>n>>m;
        int c = 0;
        if(n==0 && m==0)
            break;
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                vis[i][j] = 0;
                cin>>ch[i][j];
            }
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(!vis[i][j] && ch[i][j]=='@')
                {
                    dfs(i,j);
                    ++c;
                }
            }
        }
        cout<<c<<endl;
    }

    return 0;
}
