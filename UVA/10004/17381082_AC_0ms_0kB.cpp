#include<bits/stdc++.h>
using namespace std;

int n,e,visited[205];
int par[205];
vector<int>vt[205];
int color[205];
int flag = 0;

void BFS(int N)
{
    visited[N] = 1;
    color[N] = 1;
    queue<int>Q;
    Q.push(N);
    while(!Q.empty())
    {
        int frnt = Q.front();
        Q.pop();
        int sz = vt[frnt].size();
        for(int i=0; i<sz; i++)
        {
            if(!visited[vt[frnt][i]] )
            {
                visited[vt[frnt][i]] = 1;
                Q.push(vt[frnt][i]);
                if(color[frnt]==1)
                    color[vt[frnt][i]] = 2;
                else
                    color[vt[frnt][i]] = 1;

            }
            //else if(color[i]==color[vt[frnt][i]])
            //  flag = 1;
        }
    }
}

void Check(int N)
{
    int    frnt = N;

    int sz = vt[frnt].size();
    for(int i=0; i<sz; i++)
    {
        if(color[vt[frnt][i]]==color[N])
            flag = 1;
        // cout<<i<<endl;
        //cout<<vt[frnt][i]<<" "<<color[vt[frnt][i]]<<" "<<color[N]<<endl;
    }
}

int main()
{
    int i,j,k,l,u,v;
    while(1)
    {
        memset(visited,0,sizeof(visited));
        memset(color,0,sizeof(color));
        scanf("%d",&n);
        if(n==0)
            break;
        flag = 0;
        scanf("%d",&e);
        for(i=0; i<e; i++)
        {
            scanf("%d%d",&u,&v);
            vt[u].push_back(v);
            vt[v].push_back(u);
        }
        flag = 0;
        BFS(0);
        for(i=0; i<n; i++)
            Check(i);
        if(flag)
            printf("NOT BICOLORABLE.\n");
        else
            printf("BICOLORABLE.\n");
        for(i=0; i<n; i++)
            vt[i].clear();
       // for(i=0; i<n; i++)
         //   cout<<color[i]<<" ";
        //cout<<endl<<endl;
    }
}


