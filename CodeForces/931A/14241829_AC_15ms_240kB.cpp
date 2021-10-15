#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[30000];

int main()
{
    ll n,i,j,k,a,b,c,d;
    cin>>a>>b;
    n = abs(a-b);
    if(n%2==0)
    {
        c = n/2;
        c = (c*(c+1))/2;
        c*=2;
    }
    else
    {
        c = n/2;
        n = c+1;
        c = (c*(c+1))/2;
        c*=2;
        c+=n;
    }
    cout<<c<<endl;
}
