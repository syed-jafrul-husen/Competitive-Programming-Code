#include<bits/stdc++.h>
using namespace std;
vector<int>vt[10005];
int start[10005],finish[10005],color[10005];
int white = 0,grey = 1,black = -1,tim=0,cycle;

void topoSort(int u)
{
    ++tim;
    color[u] = grey;
    start[u] = tim;
    int sz = vt[u].size(),i,adj;
    for(i=0; i<sz; i++)
    {
        adj = vt[u][i];
        if(grey==color[u] && grey==color[adj])
            cycle = 1;
        if(color[adj]==white)
            topoSort(adj);
    }
    ++tim;
    finish[u] = tim;
    color[u] = black;
}

int main()
{
   int n,m,i,j,u,v,e;
   cin>>n>>e;
   for(i=0; i<e; i++)
   {
       cin>>u>>v;
       vt[u].push_back(v);
   }
   for(i=1; i<=n; i++)
   {
       sort(vt[i].rbegin(),vt[i].rend());
   }
   for(i=n; i>=1; i--)
   {
       if(color[i]==white)
        topoSort(i);
   }
   if(cycle){
    cout<<"Sandro fails."<<endl;
    return 0;}
   vector<pair<int,int> >p;
   for(i=1; i<=n; i++)
   {
       p.push_back(make_pair(finish[i],i));
   }
   sort(p.begin(),p.end());
   for(i=n-1; i>=0; i--)
   {
       cout<<p[i].second<<" ";
   }

}
