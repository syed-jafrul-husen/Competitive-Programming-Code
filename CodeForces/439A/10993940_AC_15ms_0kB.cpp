#include<stdio.h>
int main()
{
    int n,d,i,sum=0,a=0,data,ans;
    scanf("%d%d",&n,&d);
    int t[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&t[i]);
        sum = sum+t[i];
        if(i<n-1)
            a = a + 10 + t[i];
        else
            a = a+t[i];
    }
    if(a<=d)
    {
        data = d-sum;
        ans = data/5;
        printf("%d\n",ans);
    }
    else
        printf("-1\n");
}
