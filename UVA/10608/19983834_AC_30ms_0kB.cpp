#include<bits/stdc++.h>
using namespace std;
int c;
vector<int>vt[500005];
int visited[500005];

void BFS(int s)
{
    ++c;
    visited[s] = 1;
    queue<int>Q;
    Q.push(s);
    while(!Q.empty())
    {
        int frnt = Q.front();
        Q.pop();
        int sz,i;
        sz = vt[frnt].size();
        for(i=0; i<sz; i++)
        {
            if(!visited[vt[frnt][i]])
            {
                ++c;
                visited[vt[frnt][i]] = 1;
                Q.push(vt[frnt][i]);
            }
        }
    }
}

int main()
{
    int t,i,j,k,l;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        int n,m,u,v;
        cin>>n>>m;
        for(j=0; j<m; j++)
        {
            cin>>u>>v;
            vt[u].push_back(v);
            vt[v].push_back(u);
        }
        int ans = 0;
        for(j=0; j<=500005; j++)
            visited[j] = 0;
        for(j=1; j<=n; j++)
        {
            if(!visited[j])
            {
                 c = 0;
                BFS(j);
                ans = max(ans,c);
            }
        }
        cout<<ans<<endl;
        for(j=1; j<=n; j++)
            vt[j].clear();
    }
}
