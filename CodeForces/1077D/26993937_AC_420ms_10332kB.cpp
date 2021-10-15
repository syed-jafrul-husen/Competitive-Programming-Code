#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll a[200005],n,k;
vector<ll>vt;
map<ll,ll>mp;
map<ll,ll>::iterator it;

bool can(ll cnt)
{
    vt.clear();
    ll x = 0,i;
    for(it=mp.begin(); it!=mp.end(); it++)
    {
        ll c = it->second/cnt;
        for(i=0; i<c && x<k; i++)
        {
            vt.push_back(it->first);
            ++x;
        }
        if(x==k)
            break;
    }
    return x==k;
}

int main()
{
    ll i,j;
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        ++mp[a[i]];
    }
    ll b=0,e=n,mid;
    while(e-b>1)
    {
        mid = (b+e)/2;
        if(can(mid))
        {
            b = mid;
        }
        else
        {
            e = mid;
        }
    }
    if(!can(e))
    {
        can(b);
    }
    for(i=0; i<k; i++)
    {
        cout<<vt[i]<<" ";
    }

}
