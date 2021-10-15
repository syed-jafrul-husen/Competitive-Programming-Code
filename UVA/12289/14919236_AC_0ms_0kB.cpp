#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,x;
    char ch[100];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%s",&ch);
        x = strlen(ch);
        if(x==5)
            printf("3\n");
        else
        {
            if( (ch[0]=='o' && ch[1]=='n') || (ch[2]=='e' && ch[0]=='o') || (ch[2]=='e' && ch[1]=='n') )
                printf("1\n");
            else
                printf("2\n");
        }
    }
}