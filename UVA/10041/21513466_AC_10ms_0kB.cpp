#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,m,i,j,k,q,g,x1,y1,x2,y2,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+2];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        ll c = 0,mid=a[n/2];
        for(i=0; i<n; i++)
        {
            c = c+ abs(a[i]-mid);
        }
        cout<<c<<endl;

    }
}
