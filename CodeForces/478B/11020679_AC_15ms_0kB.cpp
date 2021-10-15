#include<stdio.h>

int main()
{
    long long m,n,max,min;
    scanf("%lld%lld",&n,&m);
    max = (n-m+1)*(n-m)/2;
    min = (( (m-(n%m)) * (n/m) * (n/m-1)/2 ) + ((n%m)* (n/m+1)*(n/m)/2));
    printf("%lld %lld",min,max);
}
