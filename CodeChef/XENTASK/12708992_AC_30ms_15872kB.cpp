#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,c1=0,j,c2=0;
    int a[100000],b[100000];
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        c1=0;
        c2=0;
        scanf("%d",&n);

        for(j=0; j<n; j++)
        {
            scanf("%d",&a[j]);
        }
        for(j=0; j<n; j++)
        {
            scanf("%d",&b[j]);
        }
        for(j=0; j<n; j++)
        {
            if(j%2==0)
            {
                c1 = c1+a[j];
                c2 = c2+b[j];
            }
            else
            {
                c1 = c1+b[j];
                c2 = c2+a[j];
            }
        }
        if(c1<c2)
            printf("%d\n",c1);
        else
            printf("%d\n",c2);
    }
    return 0;
}
