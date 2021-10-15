#include<stdio.h>
#include<string.h>
int main()
{
    int i,n1,n2,mx,c=0;
    char a[100000];
    char b[100000];
    gets(a);
    n1=strlen(a);
    gets(b);
    n2=strlen(b);
    if(n1<n2)
        mx=n2;
    else
        mx=n1;
    if((n1==n2))
    {
        for(i=0; i<n1; i++)
        {
            if(a[i] == b[i])
            {
                c++;
            }
            else
            {
                printf("%d",mx);
                break;
            }
        }
        if(c==mx)
            printf("-1");
    }
    else
        printf("%d",mx);
    printf("\n");
}
