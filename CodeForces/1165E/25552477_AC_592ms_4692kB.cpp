#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    unsigned long long n,i,j,k,l,sm=0,M=998244353;
    cin>>n;
    unsigned long long a[n+2],b[n+2],c[n+2];
    for(i=1; i<=n; i++)
        cin>>a[i];
    for(i=1; i<=n; i++)
        cin>>b[i];
    for(i=1; i<=n; i++)
    {
        c[i] = a[i]*i*(n-i+1);
    }
    sort(c+1,c+n+1);
    sort(b+1,b+n+1,greater<long long>());
    for(i=1; i<=n; i++)
    {
        sm = (sm+( (b[i]%M)*1LL* (c[i]%M) )%M)%M;
    }
    cout<<sm<<endl;
}