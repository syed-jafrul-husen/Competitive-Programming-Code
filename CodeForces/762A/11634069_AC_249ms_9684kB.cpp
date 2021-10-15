#include<bits/stdc++.h>
using namespace std;

long long a[1000000];

int main()
{
    long long n,k,i,j,m=0;
    scanf("%lld%lld",&n,&k);
    for(j=1; j*j<=n; j++)
    {
        if(n%j==0)
        {
            if(n/j==j)
            {
                a[m]=j;
                ++m;
            }
            else
            {
                a[m] = j;
                ++m;
                a[m]=n/j;
                ++m;
            }
        }

    }
    sort(a,a+m);
    if(k<=m)
        printf("%lld\n",a[k-1]);
    else
        printf("-1\n");
}
