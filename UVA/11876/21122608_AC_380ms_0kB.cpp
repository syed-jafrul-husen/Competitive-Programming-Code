#include <bits/stdc++.h>
using namespace std;

long long NOD[2000002],ans[10000005];

long long divisor(long long n)
{
    long long c = 0,i;
    for(i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            if(n/i==i) {
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
    NOD[0]=1;
    NOD[1]=2;
    for(long long i=2; i<=65000; i++)
    {
       NOD[i] = NOD[i-1] + divisor(NOD[i-1]);
    }
    for(long long i=0; i<=1000000; i++)
        ans[NOD[i]] = 1;
    for(long long i=1; i<=1000000; i++)
        ans[i] = ans[i]+ans[i-1];

    long long t,i,l,c,mx=0,x,y,te=0;
    scanf("%lld",&t);
    while(t--)
    {
        ++te;
        scanf("%lld%lld",&x,&y);
        //printf("Case %lld: %lld\n",te, (ans[y]-ans[x-1]));
        printf("Case %lld: %lld\n",te,ans[y]-ans[x-1]);
    }

    return 0;
}
