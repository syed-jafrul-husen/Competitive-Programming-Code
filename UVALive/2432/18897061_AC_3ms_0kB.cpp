#include<bits/stdc++.h>
using namespace std;
using namespace std;

int main()
{
    int zz,k,i,x;
    cin>>zz;
    while(zz--)
    {
        int n,m,y;
        cin>>n>>m;
        priority_queue<int,vector<int>,greater<int> >q;
        vector<int>adj[n+2];
        int indeg[n+1];
        for(i=0; i<=n; i++){
                adj[i].clear();
                indeg[i] = 0;}

        while(m--)
        {
            cin>>x>>k;
            for(i=0; i<k; i++)
            {
                cin>>y;
                adj[y].push_back(x);
                indeg[x] = indeg[x]+1;
            }
        }
        for(int i=1; i<=n; i++)
            if(indeg[i]==0)
                q.push(i);

            int a[n+2],b=0,cnt=0;
            while(!q.empty())
            {
                int t=q.top();
                ++cnt;
                a[cnt] = t;
                q.pop();
                int sz = adj[t].size();
                for(int i=0; i<sz; i++)
                {
                    if(--indeg[adj[t][i]]==0)
                        q.push(adj[t][i]);
                }
            }
            for(i=1; i<=n; i++)
            {
                cout<<a[i];
                if(i<n)
                    cout<<" ";
            }
            cout<<endl;
            if(zz>0)
        cout<<endl;
    }
    return 0;
}
