#include<stdio.h>

int main()
{
    long long n,a[100],i;
    a[1] = 1,a[2] = 2;
    for(i=3; i<=50; i++)
        a[i] = a[i-1]+a[i-2];
    while(1)
    {
        scanf("%lld",&n);
        if(n==0) break;
        else printf("%lld\n", a[n] );
    }

    return 0;
}
