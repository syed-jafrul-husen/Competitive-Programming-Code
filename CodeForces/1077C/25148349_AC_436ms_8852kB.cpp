#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ll n,i,j,k,sm=0,element,c=0;
    cin>>n;
    ll a[n+2];
    vector<ll>vt;
    map<ll,ll>mp;
    map<ll,ll>::reverse_iterator it;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        sm+=a[i];
        ++mp[a[i]];
    }
    for(i=0; i<n; i++)
    {
        sm-=a[i];
        --mp[a[i]];
        k = -1;
        for(it=mp.rbegin(); it!=mp.rend(); it++)
        {
            if(it->second>0)
            {
                k = it->first;
                break;
            }
        }
        if(k>-1)
        {
            if(sm-k==k)
            {
                ++c;
                vt.push_back(i+1);
            }

        }
        sm+=a[i];
        ++mp[a[i]];
    }
    cout<<c<<endl;
    for(i=0; i<c; i++)
        cout<<vt[i]<<" ";
    cout<<endl;


}
