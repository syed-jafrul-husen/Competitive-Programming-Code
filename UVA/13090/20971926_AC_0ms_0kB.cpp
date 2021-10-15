#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    //freopen("output.txt","w",stdout);
    ll t,n,m,i,j;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld%lld",&n,&m);
        n--;
        n/=m;
        printf("Case %lld: %lld\n",i,n);
    }
    return 0;
}
//2147483648
