#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,c=0,j,a[10000],b;
    scanf("%d",&t);

    for(i=0; i<t; i++)
    {

        scanf("%d",&a[i]);

    }

    for(i=1; i<t-1; i++)
    {
        if(a[i]<a[i-1] && a[i]<a[i+1])
        {
            ++c;

        }
        else if(a[i]>a[i-1] && a[i]>a[i+1])
        {
            ++c;

        }
    }

    printf("%d\n",c);
    return 0;
}
