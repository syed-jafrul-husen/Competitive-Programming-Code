#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i;
    while(1)
    {
        scanf("%lld",&n);
        if(n==0)
            break;
        long long a[n];
        for(i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
        }
        sort(a,a+n);
        for(i=0; i<n; i++)
        {
            if(i==(n-1))
                printf("%lld",a[i]);
            else
                printf("%lld ",a[i]);

        }
        printf("\n");
    }
    return 0;
}
