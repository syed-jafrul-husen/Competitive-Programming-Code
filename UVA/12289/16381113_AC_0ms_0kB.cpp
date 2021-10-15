#include <stdio.h>
#include <string.h>
int main()
{
    char st[8];//, s[]="one", s1[]="two", s3[]="three";
    int t, i, n;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%s", st);
        n=strlen(st);
        if(n==5)
        {
            printf("3\n");
        }
        else
        {
            if((st[0]=='o' && st[1]=='n') || (st[1]=='n' && st[2]=='e') || (st[0]=='o' && st[2]=='e') )
            {
                printf("1\n");
            }

            else// if(st[0]=='t' && st[1]=='w' || st[1]=='w' && st[2]=='o' || st[0]=='t' && st[2]=='o')
            {
                printf("2\n");
            }
        }
    }

}
