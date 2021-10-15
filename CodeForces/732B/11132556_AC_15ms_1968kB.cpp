#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,sum=0,x,add=0;
    scanf("%d%d",&n,&m);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n-1; i++)
    {
        x = a[i]+a[i+1];
        if(x<m)
        {
            sum = m-x;
            a[i+1] = sum + a[i+1];
            add = add+sum;
        }
    }
    printf("%d\n",add);
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}
