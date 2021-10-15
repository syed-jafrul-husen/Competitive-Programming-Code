#include<stdio.h>
int main()
{
    long n,sum = 0,i;
    scanf("%ld",&n);
    char ch[50];
    for(i=0; i<n; i++)
    {
        scanf("%s",&ch);
        if(ch[0]=='T')
            sum = sum+4;
        else if(ch[0]=='C')
            sum = sum+6;
        else if(ch[0]=='O')
            sum = sum+8;
        else if(ch[0]=='D')
            sum = sum+12;
        else if(ch[0]=='I')
            sum = sum+20;
    }
    printf("%ld",sum);
}
