#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll a[100005],b[100005];
int main()
{
    vector<pair<ll,ll> >vt;
    ll n,m,i,j,k,x,y,start=1;
    cin>>n>>m>>x>>y;
    for(i=1; i<=n; i++)
        cin>>a[i];
    for(i=1; i<=m; i++)
        cin>>b[i];
    map<ll,ll>mp;
    for(i=1; i<=n; i++)
    {
        k = lower_bound(b+start,b+1+m,a[i]-x)-b;
        if(k>m)
            break;
        if(b[k]<=a[i]+y)
        {
            vt.push_back(make_pair(i,k));
            start = k+1;
        }
        else
            start = k;
    }
    ll sz = vt.size();
    cout<<sz<<endl;
    for(i=0; i<sz; i++)
        cout<<vt[i].first<<" "<<vt[i].second<<endl;
}
