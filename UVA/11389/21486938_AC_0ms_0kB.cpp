#include<bits/stdc++.h>
using namespace std;
#define ll  long long

int main()
{

    ll t,n,m,i,j,k,a,b,q,sm=0;
    while(1)
    {
        cin>>n>>m>>k;
        ll a[n+2],b[n+2];
        if(n==0 && m==0 && k==0)
            break;
        sm = 0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        ll ans = 0;
        for(i=0; i<n; i++)
        {
            cin>>b[i];
        }
        sort(b,b+n,greater<int>());
        j = 0;
        for(i=n-1; i>=0; i--)
        {
            q = a[i]+b[i];
            if(q>m)
                ans+=(q-m)*k;
        }
         cout<<ans<<endl;
    }

}

