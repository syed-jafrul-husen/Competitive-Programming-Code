#include<stdio.h>
int main()
{
    long long int a,b,diffrence;
    while( scanf("%lld%lld",&a,&b)== 2)
    {
        if(a>b)
            diffrence = a -b;
        else
            diffrence = b - a;
        printf("%lld\n",diffrence);

    }
    return 0;

}