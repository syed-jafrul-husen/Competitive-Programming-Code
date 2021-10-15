#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,up=0,lw=0;
    char ch[105];
    gets(ch);
    n=strlen(ch);
    for(i=0; i<n; i++)
    {
        if(ch[i]>='A' && ch[i]<='Z')
            up++;
        else if(ch[i]>='a' && ch[i]<='z')
            lw++;
    }
    if(up>lw)
    {
        for(i=0; i<n; i++)
        {
            if(ch[i]>='a' && ch[i]<='z')
                ch[i] = ch[i] - 32;
        }
    }
    else
    {
        for(i=0; i<n; i++)
        {
            if(ch[i]>='A' && ch[i]<='Z')
                ch[i] = ch[i] + 32;
        }
    }
    puts(ch);

}
