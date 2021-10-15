#include<stdio.h>
int main()
{
    long long a,b,c,sum,d;
    scanf("%lld%lld%lld",&a,&b,&c);
    if(a<0)
        a = -a;
    if(b<0)
        b = -b;
    sum = a+b;
    if(sum<c)
    {
        d = c-sum;
        if(d%2==0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    else if(sum==c)
        printf("Yes\n");
    else
        printf("No\n");
}
