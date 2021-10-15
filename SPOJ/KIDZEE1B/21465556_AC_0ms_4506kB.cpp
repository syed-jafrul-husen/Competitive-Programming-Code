#include<stdio.h>

int main()
{
    int t,te=0,a,b,c,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&a,&b,&c);
        printf("Case %d: Sum of %d, %d and %d is %d\n",++te,a,b,c,a+b+c);
    }
}
