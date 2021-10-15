#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n = 5000005;
ll prime[5000005];
ll DP[5000005];
ll spf[5000005];
void sieve()
{
    prime[0] = 1;
    prime[1] = 1;
    for (ll i=2; i<n; ++i)
    {
        if (!prime[i])
        {
            spf[i]+=i;
            for(ll j=2*i; j<n; j+= i)
            {
                spf[j]+=i;
                prime[j] = 1;
            }
        }
    }
    for(ll i=1; i<n; ++i)
    {
        if (prime[spf[i]]==0)
            DP[i] = 1;
    }
}

//
//
//map<ll,ll>mp;
//map<ll,ll>::iterator it;
//ll res = 1;
//void prime_factorize(ll n)
//{
//    ll t=0;
//    for(ll i=0; prime[i] * prime[i] <= n; i++)
//    {
//        if(n%prime[i]==0)
//        {
//            ll cnt = 0;
//            while(n % prime[i] == 0)
//            {
//                mp[prime[i]] = prime[i];
//                n /= prime[i];
//            }
//            res*=(cnt+1);
//        }
//    }
//    if(n > 1)
//    {
//        mp[n] = n;
//    }
//}


int main()
{
    sieve();
    ll  n,i,j,k,l;
    for(i=1; i<=5000000; i++)
    {
        DP[i] = DP[i]+DP[i-1];
    }

    while(1)
    {
        ll t = 1,x,i,y,sm=0,c=0;
        scanf("%lld",&x);
        if(x==0)
            break;
        scanf("%lld",&y);

        printf("%lld\n",DP[y]-DP[x-1]);
    }
}
