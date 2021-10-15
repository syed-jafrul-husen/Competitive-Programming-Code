#include<stdio.h>
#include<string.h>
int main()
{
    int i,st;
    char ch[1000];
    scanf("%s",ch);
    st = strlen(ch);
    if(ch[0]>='a' && ch[0]<='z')
    {
        ch[0] = ch[0] - 32;
        printf("%c",ch[0]);
    }
    else
    {
        printf("%c",ch[0]);
    }
    for(i=1; i<st; i++)
        printf("%c",ch[i]);
}
