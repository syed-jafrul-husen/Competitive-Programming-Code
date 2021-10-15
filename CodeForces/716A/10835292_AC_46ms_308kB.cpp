#include<stdio.h>
int main()
{
    long n;
    int c,count=0;
    scanf("%ld%d",&n,&c);
    int a[n],b,i;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1; i<n; i++)
    {
        b = a[i]-a[i-1];
        if(b<=c)
            count++;
        else
            count = 0;
    }
    printf("%d\n",count+1);
}
