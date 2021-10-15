#include<bits/stdc++.h>
using namespace std;
char grid[25][25];
int s_row=0,s_col=0,d_row=0,d_col=0,row,col;
int cost[100][100],visited[25][25];
int move_x[] = {1,-1,0,0};
int move_y[] = {0,0,1,-1};
void grid_input(int row,int col)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>grid[i][j];
        }
    }
}
void print_grid(int row,int col)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
}
int BFS(int s_row,int s_col)
{
    cost[s_row][s_col] = 0;
    visited[s_row][s_col] = 1;
    queue<int>Q;
    Q.push(s_row);
    Q.push(s_col);
    while(!Q.empty())
    {
        int ux = Q.front();
        Q.pop();
        int uy = Q.front();
        Q.pop();
        for(int i=0; i<4; i++)
        {
            int vx = ux+move_x[i];
            int vy = uy+move_y[i];
            if(visited[vx][vy]==0 && (grid[vx][vy]=='.' ) && vx>=0 && vx<row && vy>=0 && vy<col)
            {
                Q.push(vx);
                Q.push(vy);
                visited[vx][vy] = 1;
                //cout<<vx<<" "<<vy<<endl;
                if( (vx==0 || vy==0 || vx==row-1 || vy==col-1) && grid[vx][vy]=='.' )
                    return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int t,i,j,f;
    cin>>t;
    while(t--)
    {
        for(i=0; i<25; i++)
            for(j=0; j<25; j++)
                visited[i][j] = 0;
        cin>>row>>col;
        grid_input(row,col);
        // print_grid(row,col);
        int x = 0,xx=0;
        f = 0;
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                if( (i==0 || j==0 || i==row-1 || j==col-1) && grid[i][j]=='.')
                {
                    //cout<<"YES"<<endl;
                    f = BFS(i,j);
                    xx = 1;
                    break;
                }
            }
            if(xx==1)
                break;
        }

        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                if( (i==0 || j==0 || i==row-1 || j==col-1) && grid[i][j]=='.')
                {
                    ++x;
                }
            }
        }
        //cout<<f<<" "<<x<<endl;
        if( f==1 && x==2)
            cout<<"valid"<<endl;
        else
            cout<<"invalid"<<endl;
    }

    return 0;
}
