#include<stdio.h>
#include<string.h>
int main()
{
    char s[105];
    scanf("%s",s);
    int n,i,temp=0;
    n = strlen(s);
    for(i=0; i<n; i++)
    {
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            printf("YES\n");
            break;
        }
        else
        {
            temp++;
            if(temp == n)
                printf("NO\n");
        }
    }
}
