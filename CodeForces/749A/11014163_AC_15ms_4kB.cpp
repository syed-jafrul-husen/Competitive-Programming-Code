#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,n,c=0;
    scanf("%d",&n);
    if(n%2==0)
    {
        a = n/2;
        printf("%d\n",a);
        for(i=0; i<a; i++)
        {
            printf("2 ");
        }
        printf("\n");
    }
    else
    {
        a = n/2;
        printf("%d\n",a);
        for(i=0; i<(a-1); i++)
        {
            printf("2 ");
        }
        printf("3\n");
    }
}
