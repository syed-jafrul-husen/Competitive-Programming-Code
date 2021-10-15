#include<bits/stdc++.h>
using namespace std;
using namespace std;

int main()
{
    int zz,k,i,x,n,m,y;
    cin>>zz;
    while(zz--)
    {
        cin>>n>>m;
        priority_queue<int,vector<int>,greater<int> >q;
        vector<int>adj[206];
        int indeg[206];
        for(i=0; i<=n; i++)
        {
            adj[i].clear();
            indeg[i] = 0;
        }

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
        for( i=1; i<=n; i++)
            if(indeg[i]==0)
                q.push(i);

        int a[n+2],b=0,cnt=0;
        while(!q.empty())
        {
            int t=q.top();
            ++cnt;
            a[cnt] = t;
            q.pop();
            for(vector<int>::iterator it=adj[t].begin(); it!=adj[t].end(); ++it)
            {
                if(--indeg[*it]==0)
                    q.push(*it);
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
