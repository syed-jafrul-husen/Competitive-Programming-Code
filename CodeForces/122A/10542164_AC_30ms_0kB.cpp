#include<stdio.h>
int main()
{
    int n,digit;
    int i,flag=0;
    scanf("%d",&n);
    if (n%4==0 || n%7==0 || n%44==0 || n%47==0 || n%74==0 || n%77==0)
    {
        flag=1;
    }
    else
    {
        while (n>0)
        {
            digit=n%10;
            if (digit==4 || digit==7)
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
            n=n/10;
        }
    }

    if (flag==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
