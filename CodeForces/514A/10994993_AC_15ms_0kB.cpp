#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    gets(a);
    int b,i;
    b = strlen(a);

    if(a[0]>='5' && a[0]<='8')
        a[i] = '9' - a[i] + '0';
    for(i=1; i<b; i++)
    {
        if(a[i]<'5')
            a[i]=a[i];
        else
            a[i] = '9' - a[i] + '0';
    }
    printf("%s",a);
}
