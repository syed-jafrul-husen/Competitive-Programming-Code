#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    char ch[100];
    while(gets(ch))
    {
        n = strlen(ch);
        for(i=0; i<n; i++)
        {
        ch[i] = ch[i] - 7;
        }
        puts(ch);
    }
}
