#include<bits/stdc++.h>
using namespace std;

int main()
{
    int zz,k,i,x,n,m,y,tc=0,e,c;
    while(cin>>n)
    {
        ++tc;
        priority_queue<int,vector<int>,greater<int> >q;
        vector<int>adj[206];
        int indeg[206];
        for(i=0; i<=n; i++)
        {
            adj[i].clear();
            indeg[i] = 0;
        }
        map<string,int>mp;
        map<int,string>mp2;
        string str[n+2];
        for( i=0; i<n; i++)
        {
            cin>>str[i];
        }
        c= 0 ;
        sort(str,str+n);
        for( i=0; i<n; i++)
        {
            if(mp[str[i]]==0)
            {
                ++c;
                mp[str[i]] = c;
                mp2[c] = str[i];
            }
        }
        cin>>e;
        string u,x;
        for( i=0; i<e; i++)
        {
            cin>>u>>x;
            adj[mp[u]].push_back(mp[x]);
            ++indeg[mp[x]];
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
         printf("Case #%d: Dilbert should drink beverages in this order: ",tc);
         for(i=1; i<=n; i++)
        {
            int k;
            k = a[i];
            if(i==n)
                cout<<mp2[k]<<".";
            else
                cout<<mp2[k]<<" ";
        }
        cout<<endl<<endl;
    }
    return 0;
}
