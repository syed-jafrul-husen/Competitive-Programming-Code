#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll N = 1e6+1;
ll isprime[N];
ll cnt;
ll prime[N];
ll check[2*N+6];


void sieve()
{

    ll i, j, sqrtN;
    for( i = 2; i <= N >> 1; i++ )
        isprime[i] = 0;
    sqrtN = int( sqrt((double)N) );
    for( i = 3; i <= sqrtN; i += 2 )
    {

        if(isprime[i>>1] == 0 )
        {

            for( j = i * i; j <= N; j += i + i )
                isprime[j>>1] = 1;
        }
    }
    prime[cnt++] = 2;
    for( i = 3; i <= N; i += 2 )
    {
        if( isprime[i>>1] == 0 )
            prime[cnt++] = i;
    }
}

void solve()
{
    ll i,k,t,j;
    for(i=0; i<cnt; i++)
    {
        for(j=i; j<cnt; j++)
        {
            k = prime[i]*prime[j];
            if(k>1048576)
                break;
           // cout<<k<<"; ";
            check[k] = 1;
        }

    }
}


int main()
{
    sieve();
    //cout<<cnt<<endl;
    solve();
   // cout<<"YES"<<endl;
    ll  n,i,j,k,l,t;

    while(scanf("%lld",&t)==1)
    {
        ll x,i,sz=0,mx=0;
        for(j=0; j<t; j++)
        {
            scanf("%lld",&n);
            if(check[n]==1)
                ++sz;
        }
        printf("%lld\n",sz);
    }
}
