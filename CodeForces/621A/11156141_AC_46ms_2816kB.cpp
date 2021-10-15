#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long sum=0,i,n,c1=0,c2=0;
    scanf("%lld",&n);
    long long a[n];
    for(i=0; i<n; i++)
    {
        scanf("%lld",&a[i]);
        if((a[i]%2)==1)
            ++c1;
    }
    if(c1%2==0)
    {
        for(i=0; i<n; i++)
        {
            sum = sum + a[i];
        }
    }
    else
    {
        sort(a,a+n);
        for(i=n-1; i>=0; i--)
        {
            if(a[i]%2==0)
                sum = sum + a[i];
            else if(a[i]%2==1)
            {
                ++c2;
                if(c2<c1)
                    sum = sum + a[i];
            }
        }
    }
    printf("%lld",sum);
}
