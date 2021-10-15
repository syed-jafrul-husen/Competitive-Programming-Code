#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,i,j;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        printf("%d\n",a^b);
    }
    return 0;
}
