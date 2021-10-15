#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{

    ll n,i,j,k;
    while(1)
    {
        ll sm = 0,c=0;
        cin>>n;
        if(n==0)
            break;
        ll a[n*2+2];
        for(i=0; i<n; i++)
            cin>>a[i];
        for(i=0; i<n; i++)
            a[i+n] = a[i];
        for(i=n*2-1; i>=0; i--)
        {
            sm+=a[i];
            if(sm>=0)
            {
                if(i<n)
                    ++c;
                sm = 0;
            }
        }
        cout<<c<<endl;
    }

}
