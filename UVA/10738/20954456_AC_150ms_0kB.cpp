#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int high = 1000050;

ll spf[high+5], divisor[high+5];

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

ll m[high],mu[high];

int main()
{
    sieve();
    m[1] =1,mu[1] = 1;
    for(ll i=2; i<=1000000; i++)
    {
        ll c = 0;
        ll x = i;
        map<ll,ll>mp;
        map<ll,ll>::iterator it;
        while (x != 1)
        {
            ++c;
            ++mp[spf[x]];
            x = x / spf[x];
        }
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            if(it->second>1)
            {
                c = -1;
                break;
            }
        }
        if(c==-1)
            mu[i] = 0;
        else if(c%2==0)
            mu[i] = 1;
        else
            mu[i] = -1;
        mp.clear();
    }
    for(ll i=2; i<=1000000; i++)
    {
        m[i] = m[i-1]+mu[i];
    }
    ll n,x,c,te=0;
    while(1)
    {
        scanf("%lld",&n);
        if(n==0)
            break;
        printf("%8lld%8lld%8lld\n",n,mu[n],m[n]);

    }
}
