#include<stdio.h>
int main()
{
    int T,i;
    scanf("%d",&T);
    long long K[10],a,b,ans[10];
    for(i=0; i<T; i++)
    {
        scanf("%lld",&K[i]);
        a = K[i]/2;
        b = K[i]-a;
        ans[i] = a*b;
    }
    for(i=0; i<T; i++)
    {
        printf("%lld\n",ans[i]);
    }
}
