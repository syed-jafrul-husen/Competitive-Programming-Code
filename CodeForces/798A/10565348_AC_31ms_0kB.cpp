#include<stdio.h>
#include<string.h>
int main()
{
    int ln,i,j,count=0;
    char ch[20];
    gets(ch);
    ln = strlen(ch);
    j = ln-1;
    for(i=0; i<ln/2; i++)
    {
        if(ch[i] != ch[j])
        {
            count++;
        }
        j--;
    }
    if(count==1)
        printf("YES\n");
    else if(count==0 && ln%2==1)
        printf("YES\n");
    else
        printf("NO\n");
}
