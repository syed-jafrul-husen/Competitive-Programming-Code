#include<stdio.h>
int main()
{
    long long int n,k,temp=0;
    long long int i=0,t1;
    scanf("%lld%lld",&n,&k);
    for(i=0; i<n; i++)
    {
        scanf("%lld",&t1);

        if(t1%k==0)
            temp++;
    }
    printf("%lld",temp);
    return 0;



}
