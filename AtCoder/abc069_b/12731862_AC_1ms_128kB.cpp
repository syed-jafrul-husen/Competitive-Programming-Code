#include<stdio.h>
#include<string.h>

int main()
{
    int i,n;
    char a[1000];
    scanf("%s",&a);
    n = strlen(a);
    printf("%c%d%c\n",a[0],n-2,a[n-1]);
    return 0;
}
