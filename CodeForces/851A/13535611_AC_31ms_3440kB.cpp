#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k,t,s,a,b;
    scanf("%lld%lld%lld",&n,&k,&t);
    if(t>=n)
    {
        a = t-n;
        b = k-a;
        if(b<0)
            printf("0\n");
        else
            printf("%lld\n",b);
    }
    else if( (t<=n) && ((t<=k)) )
        printf("%lld\n",t);
    else if( (t<n) && (t>k) )
        printf("%lld\n",k);
    return 0;
}
