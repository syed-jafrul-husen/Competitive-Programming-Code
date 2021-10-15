#include<bits/stdc++.h>
using namespace std;

int s_row=0,s_col=0,d_row=0,d_col=0;
int cost[10][10],visited[10][10];

int move_x[] = {2,2,-2,-2,1,-1,1,-1};
int move_y[] = {1,-1,1,-1,2,2,-2,-2};


void BFS(int s_row,int s_col)
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
        for(int i=0; i<8; i++)
        {
            int vx = ux+move_x[i];
            int vy = uy+move_y[i];
            if(visited[vx][vy]==0 && (vx>=0 && vx<8) && (vy>=0 && vy<8) )
            {
                Q.push(vx);
                Q.push(vy);
                visited[vx][vy] = 1;
                cost[vx][vy] = cost[ux][uy]+1;
            }
        }
    }
}

int main()
{
    int row,col;
    string s,s2;
    while(cin>>s>>s2)
    {
        s_col = s[0]-'a';
        s_row = s[1]-'0'-1;

        d_col = s2[0]-'a';
        d_row = s2[1]-'0'-1;
        int i,j;

        for(i=0; i<9; i++)
        {
            for(j=0; j<9; j++)
            {
                visited[i][j] = 0;
                cost[i][j] = 0;
            }
        }
        BFS(s_row,s_col);

        cout<<"To get from "<<s<<" to "<<s2<<" takes "<<cost[d_row][d_col]<<" knight moves."<<endl;
    }

    return 0;
}
