#include<bits/stdc++.h>
using namespace std;

int n,e,visited[2005];
int par[205];
vector<int>vt[2050];
int status[2005];
int flag = 0,v;
int white = 0;
int grey = 1;
int black = -1;

void DFS(int s)
{
    status[s] = grey;
    int sz = vt[s].size();
    for(int i=0; i<sz; i++)
    {
        v = vt[s][i];
        if(status[v]==white)
        {
            par[v] = s;
            DFS(v);
        }
    }
    status[s] = black;
}

int main()
{
    int t,n,u,v;
    string str;
    scanf("%d",&t);
    getchar();
    getchar();
   // getchar();
    while(t--)
    {
        memset(par,0,sizeof(par));
        memset(status,0,sizeof(status));
        while(getline(cin,str))
        {
            if(str.size()==0)
                break;
            if(str.size()==1)
                n = str[0]-'A';
            else
            {
                u = str[0]-'A';
                v = str[1]-'A';
                vt[u].push_back(v);
                vt[v].push_back(u);
            }
            //str[]
            str = "";
        }
        int cnt =0;
        for(int i=0; i<=n; i++)
        {
            if(status[i]==white)
            {
                DFS(i);
                //cout<<i<<" "<<cnt<<endl;
                ++cnt;
            }

        }
        
        cout<<cnt<<endl;
        if(t>0)
            cout<<endl;
        for(int i=0; i<=n; i++)
            vt[i].clear();

    }
}

