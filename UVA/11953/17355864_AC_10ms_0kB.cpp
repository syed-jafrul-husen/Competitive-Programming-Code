#include<bits/stdc++.h>
using namespace std;

int t,n,cnt=0;
int visit[105][105];
char ch[105][105];
int grid_x[] = {1,-1,0,0};
int grid_y[] = {0,0,1,-1};

void BFS(int ux,int uy)
{
        ch[ux][uy]  = '?';
        for(int i=0; i<4; i++)
        {
            int vx = ux + grid_x[i];
            int vy = uy + grid_y[i];
            if(vx>=0 && vx<n && vy>=0 && vy<n &&(ch[vx][vy]=='@' || ch[vx][vy]=='x'))
            {
                ch[vx][vy] = '?';
                BFS(vx,vy);
            }
        }
    }


int main()
{
    scanf("%d",&t);
    int cs = 0;
    while(t--)
    {
        ++cs;
        cnt = 0;
        scanf("%d",&n);
        getchar();
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                scanf("%c",&ch[i][j]);
            }
            getchar();
        }
        for(int i=0; i<105; i++)
            for(int j=0; j<105; j++)
                visit[i][j] = 0;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(ch[i][j]=='x'){
                    BFS(i,j);++cnt;}
            }

        }


        BFS(0,0);
        printf("Case %d: %d\n",cs,cnt);
    }
}
