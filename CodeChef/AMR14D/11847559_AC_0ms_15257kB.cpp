#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,b,t,c,j;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&n);
        int a[n];
        for(j=0; j<n; j++)
            scanf("%d",&a[j]);
        sort(a,a+n);
        c=1;
        for(j=0; j<n-1; j++)
        {
            if(a[j]!=a[j+1])
                ++c;
        }
        if(c==n)
            printf("YES\n");
        else
            printf("NO\n");

    }
    return 0;
}
