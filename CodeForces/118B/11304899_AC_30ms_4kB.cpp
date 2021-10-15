#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,a,b,c,d,e,f,k=0;
    scanf("%d",&n);
    a = n*2+1;
    f = a/2;
    e = f-1;
    for(i=0; i<=f; i++)
    {
        for(j=f; j>i; j--)
        {
            printf("  ");
        }
        b = i*2+1;
        c = b/2;
        d = 0;
        for(j=0; j<b; j++)
        {
            if(c>j)
            {
                printf("%d ",d);
                d++;
            }
            else
            {
                if(j==b-1)
                    printf("%d",d);
                else
                    printf("%d ",d);
                d--;
            }
        }
        printf("\n");
    }
    for(i=f-1; i>=0; i--)
    {
        b = i*2+1;
        c = b/2;
        d = 0;
        for(j=0; j<=k; j++)
        {
            printf("  ");
        }
        k++;
        for(j=0; j<b; j++)
        {
            if(c>j)
            {
                printf("%d ",d);
                d++;
            }
            else
            {
                if(j==(b-1))
                    printf("%d",d);
                else
                    printf("%d ",d);
                d--;
            }
        }
        printf("\n");
    }


}
