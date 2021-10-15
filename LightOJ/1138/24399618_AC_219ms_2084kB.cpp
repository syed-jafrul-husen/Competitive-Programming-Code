#include<bits/stdc++.h>
using namespace std;
#define ll long long


ll calc_func(ll N, ll x)
{
    ll counter = 0;
    while(N)
    {
        counter+=N/5;
        N = N / x;
    }
    return counter;
}

void binarySearch(ll n)
{
    ll i,b = 1,e = 1000000000000000,m,f=0,ans;
    for(i=1; i<=200; i++)
    {
        m = (e+b)/2;
        ll mn =  calc_func(m, 5);
        if(mn==n)
        {
            f = 1;
            ans = m;
            e = m-1;
        }
        else if(mn<n)
            b = m+1;
        else
            e = m-1;
    }
    if(f)
        cout<<ans<<endl;
    else
        cout<<"impossible"<<endl;
}

int main()
{
    ll t,i,j,k;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        ll n;
        cin>>n;
        printf("Case %lld: ",i);
        binarySearch(n);
    }

    return 0;
}
