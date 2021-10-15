#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int high = 2000050;

ll spf[high+5], divisor[high+5];

struct db
{
    ll pf,num;
};

bool cmp(db x,db y)
{
    if(x.pf<y.pf) return true;
    if(x.pf==y.pf && x.num<y.num) return true;
    return false;
}



void sieve()
{
    spf[1] = 1;
    for (ll i=2; i<high; i++)
        spf[i] = i;
    for (ll i=4; i<high; i+=2)
        spf[i] = 2;
    for (ll i=3; i*i<high; i++)
    {
        if (spf[i] == i)
        {
            for (ll j=i*i; j<high; j+=i)
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}


db ans[2000050];

int main()
{
    sieve();
    for(ll i=1; i<=2000000; i++)
    {
        ll c = 0;
       ll x = i;
        while (x != 1)
        {
            ++c;
            x = x / spf[x];
        }
        divisor[i] = c;
    }
    for(ll i=1; i<=2000000; i++)
    {
        ans[i-1].pf = divisor[i];
        ans[i-1].num = i;
    }

    sort(ans,ans+2000000,cmp);
    ll n,x,c,te=0;
    while(1)
    {
        scanf("%lld",&n);
        if(n==0)
            break;
        ++te;
        printf("Case %lld: %lld\n",te,ans[n-1].num);
    }
}
