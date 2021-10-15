#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    long long a[n],max=0,res=0;
    for(i=0; i<n; i++)
    {
        scanf("%lld",&a[i]);
        if(a[i]>max)
            max = a[i];
    }
    for(i=0; i<n; i++)
    {
        res = res + (max-a[i]);
    }
    printf("%d\n",res);

}
