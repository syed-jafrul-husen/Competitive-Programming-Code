#include<stdio.h>
#include<string.h>
int main()
{
    int ln,i,coun=0,small=0;
    char ch[100];
    gets(ch);
    ln = strlen(ch);
    for(i=0; i<ln; i++)
    {
        if(ch[i]>='A' && ch[i]<='Z')
            coun++;
        else if(ch[i]>='a' && ch[i]<='z')
            small++;
    }
    if(ln == coun)
    {
        for(i=0; i<ln; i++)
        {
            ch[i] = ch[i] + 32;
        }
        printf("%s",ch);
    }
    else if((ln==small) && small>1)
        printf("%s",ch);
    else if( ln==(coun+1) && (ch[0]>='a' && ch[0]<='z') )
    {
        ch[0] = ch[0]-32;
        for(i=1; i<ln; i++)
            ch[i]=ch[i]+32;
        printf("%s",ch);
    }
    else if(ln==1)
    {
        if(ch[0]>='a' && ch[0]<='z')
        {
              ch[0] = ch[0] + 32;
              printf("%s",ch);
        }
    }
    else
        printf("%s",ch);

    printf("\n");

}
