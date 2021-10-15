#include<stdio.h>
int main()
{
    int n,k,i,x,c=0;
    scanf("%d%d",&n,&k);
    x = 240-k;
    for(i=5; i<=x; i=i+5)
    {
        x = x-i;
        if(c>=n)
            break;
        if(x>=0)
            c++;
    }
    printf("%d\n",c);

}
