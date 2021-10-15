
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,j,k,l;
    while(scanf("%lld",&n)==1)
    {
        n = (n+1)/2;
        n*=n;
        n*=2;
        n = (n-1)+(n-3)+(n-5);
        printf("%lld\n",n);
    }
    return 0;
}
