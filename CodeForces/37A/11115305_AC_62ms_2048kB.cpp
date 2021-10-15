#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,m=1,c=1,t=1;
    scanf("%d",&n);
    int a[n+3];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    for(i=0; i<n-1; i++)
    {
        if(a[i]==a[i+1])
        {
            ++c;
        }
        if(c>t)
        {
            t=c;
        }
        if(a[i]!=a[i+1])
        {
            ++m;
            c = 1;
        }
    }
    printf("%d %d\n",t,m);
}
