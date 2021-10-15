#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,c2=0,c=0,c3=0;
    scanf("%d",&n);
    char ch[102];
    scanf("%s",ch);
    n = strlen(ch);
    for(i=0; i<n; i++)
    {
        if( (ch[i]=='B') && (ch[i+1]!='B') )
            c++;
    }
    printf("%d\n",c);
    for(i=0; i<n; i++)
    {
        if(ch[i]=='B')
        {
            c2++;
            if( (ch[i+1]!='B')  )
            {
                printf("%d ",c2);
                c2 = 0;
            }
        }
    }
    printf("\n");
}
