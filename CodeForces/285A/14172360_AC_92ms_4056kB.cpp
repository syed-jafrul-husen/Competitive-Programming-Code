#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,l,r,x,i,j,t,c=0,s,k;
    cin>>n>>k;

    ll a[n+2];
    for(i=0; i<n; i++)
    {
        a[i] = i+1;
    }
    if(n==k+1)
    {
        for(i=n-1; i>=0; i--)
            cout<<a[i]<<" ";
    }
    else
    {
        t = n-k-1;
        //cout<<t<<endl;
        for(i=0; i<n; i++)
        {
            if(c==t)
                break;
            cout<<a[i]<<" ";
            ++c;
        }
        t = i-1;
        for(i=n-1; i>t; i--)
            cout<<a[i]<<" ";
    }

    return 0;
}
