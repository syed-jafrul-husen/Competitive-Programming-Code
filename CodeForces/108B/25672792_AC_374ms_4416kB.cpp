#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,i,j,k=0,mx=0;
    cin>>n;
    ll a[n+2];
    for(i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    mx = a[n-1];
    for(i=0; i<n-1; i++)
    {
        if(2*a[i]>a[i+1] && a[i]!=a[i+1])
            k = 1;
    }
    if(k==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
