#include<bits/stdc++.h>
using namespace std;

int visit[10000];
vector<int>vt[10000];

int DFS(int s)
{
    int ans = s;
    int sz=vt[s].size(),i;
    for(i=0; i<sz; i++)
    {
        int v = vt[s][i];
        if(visit[v]==0)
        {
            visit[v] = 1;
            ans = DFS(v);
            break;
        }
    }
    return ans;

}

int main()
{
    int n,i,j,k,x,y,u,v;
    cin>>n;
    for(i=0; i<n-1; i++)
    {
        cin>>u>>v;
        vt[u].push_back(v);
        vt[v].push_back(u);
    }
    int r = n;
    visit[n] = 1;
    while(1)
    {
        u = DFS(r);
        if(u==r)
            break;
        v = DFS(r);
        cout<<"? "<<u<<" "<<v<<endl;
        cin>>r;
    }
    cout<<"! "<<r<<endl;
}
