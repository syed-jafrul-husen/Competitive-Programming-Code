#include<bits/stdc++.h>
using namespace std;

int visited[30][30];
int move_x[] = {1,-1,0,0,1,1,-1,-1};
int move_y[] = {0,0,1,-1,1,-1,-1,1};
char ch[30][30];
int n,cnt,r,c;

void BFS(int sr,int sc)
{

    visited[sr][sc] = 1;
    ++cnt;
    queue<int>Q;
    Q.push(sr);
    Q.push(sc);
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
            if(visited[vx][vy]==0 && vx>=0 && vx<r && vy>=0 && vy<c && ch[vx][vy]=='1')
            {
                visited[vx][vy] = 1;
                ++cnt;
                //cout<<cnt<<" "<<vx<<" "<<vy<<" "<<ch[vx][vy]<<endl;
                Q.push(vx);
                Q.push(vy);
            }
        }
    }
}

int main()
{
    int t,i=0,j,k,l;
    scanf("%d",&t);
    getchar();
    getchar();
    string s[38],str;
    while(t--)
    {
        r = 0;
        //getchar();
        while(getline(cin,str))
        {
            if(str.size()==0)
                break;
            s[r] = str;
            ++r;
            c = str.size();
            str = "";
        }
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                ch[i][j] = s[i][j];
            }
        }
        for(i=0; i<27; i++)
            for(j=0; j<27; j++)
                visited[i][j] = 0;
        int mx = 0;
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                if(ch[i][j]=='1' && visited[i][j]==0)
                {
                    cnt = 0;
                    BFS(i,j);
                    mx = max(cnt,mx);
                }
                //cout<<ch[i][j];
            }
            //cout<<endl;
        }
            cout<<mx<<endl;
            if(t>0)
                cout<<endl;

    }
}
