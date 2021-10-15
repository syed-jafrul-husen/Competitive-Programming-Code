#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll mod = 1000000007;
ll power(ll x,ll y)
{
    ll res = 1;
    x = x%mod;
    while(y>0)
    {
        if(y&1)
            res = (res*x)%mod;
        y = y>>1;
        x = (x*x)%mod;
    }
    return res;
}

int main()
{
    ll t,n,i,j,k,w;
    cin>>t;
    while(t--)
    {
        cin>>n>>w;
        ll x = 0;
        if(w>=0 && w<=8)
        {
            x = 9-w;
        }
        else if(w>=-9 && w<=-1)
        {
            x = 10+w;
        }
        if(w>=-9 && w<=8)
        {
            k = power(10,n-2)%mod;
            k =( (x%mod) * k)%mod;
            cout<<k<<endl;
        }
        else
            cout<<0<<endl;
    }
}
