#include<bits/stdc++.h>
using namespace std;
#define ll long long

int level[25];
bool vis[25];
vector<ll>vt[25];

void BFS(int s,int e)
{
    queue<int>q;
    q.push(s);
    vis[s] = true;
    level[s] = 0;
    while(!q.empty())
    {
        int frnt = q.front();
        q.pop();
        int n = vt[frnt].size();
        for(int i=0; i<n; i++)
        {
            int v = vt[frnt][i];
            if(vis[v]==false)
            {
                vis[v] = true;
                level[v] = level[frnt]+1;
                q.push(v);
            }
        }
    }
}

int main()
{
    int t = 0,n,i,j,k,u,v;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1; i<=20; i++)
            vt[i].clear();
        for(i=0; i<n; i++)
        {
            cin>>v;
            vt[1].push_back(v);
            vt[v].push_back(1);
        }
        for(i=2; i<=19; i++)
        {
            cin>>n;
            for(j=0; j<n; j++)
            {
                cin>>v;
                vt[i].push_back(v);
                vt[v].push_back(i);
            }
        }
        cin>>n;
        ++t;

        printf("Test Set #%d\n",t);

        for(i=0; i<n; i++)
        {
            cin>>u>>v;
            for(j=0; j<=20; j++)
            {
                level[j] = 0;
                vis[j] = false;
            }
            BFS(u,v);
            printf("%2d to %2d: %d\n",u,v,level[v]);
        }
        cout<<endl;

    }
}

