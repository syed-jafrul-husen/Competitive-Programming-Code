#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

int main()
{
    int n,m,len=0,i;
    cin>>n;
    vector<int>vt(n);
    vector<pair<int,int> >pr;
    for(i=0; i<n; i++)
    {
        cin>>vt[i];
        pr.push_back({-vt[i],i});
    }
    sort(pr.begin(),pr.end());
    cin>>m;
    vector< pair< pair<int,int> ,int > >req(m);
    for(i=0; i<m; i++)
    {
        cin>>req[i].first.first>>req[i].first.second;
        req[i].second = i;
    }
    sort(req.begin(),req.end());
    vector<int>ans(m);
    ordered_set pos;
    for(i=0; i<m; i++)
    {
        while(len<req[i].first.first)
            pos.insert(pr[len++].second);
        ans[ req[i].second ] = vt[*pos.find_by_order(req[i].first.second-1) ];
    }
    for(i=0; i<m; i++)
        cout<<ans[i]<<endl;
}
