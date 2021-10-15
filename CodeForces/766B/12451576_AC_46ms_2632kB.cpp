#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,c=0,i,j,n;
    scanf("%lld",&n);
    long long a[n+2];
    for(i=0; i<n; i++)
        scanf("%lld",&a[i]);
    sort(a,a+n);
    for(i=0; i<n-2; i++)
    {
        t = a[i]+a[i+1];
        if(t>a[i+2])
        {
            c = 1;
            printf("YES\n");
            break;
        }
    }
    if(c==0)
        printf("NO\n");
}
