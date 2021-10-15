#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll divisor(ll n)
{
    ll c = 0,i;
    for(i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
            {
                ++c;
            }
            else
                c+=2;
        }
    }
    return c;
}

int main()
{
    //freopen("output.txt","w",stdout);
    ll t,i,l,c,mx=0,ans,x,y;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&x,&y);
        mx = 0;
        for(i=x; i<=y; i++)
        {
            ll c = divisor(i);
            if(c>mx)
            {
                mx = c;
                ans = i;
            }
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",x,y,ans,mx);
    }

    return 0;
}
