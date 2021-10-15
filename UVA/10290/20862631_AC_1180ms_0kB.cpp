#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll status[(100000000/32)+2];
ll N = 100000000;
ll prime[100000000];
ll total = 0;

bool Check(int N,int pos)
{
    return (bool)(N & (1<<pos));
}
int Set(int N,int pos)
{
    return N=N | (1<<pos);
}
void sieve()
{
    int i, j, sqrtN;
    sqrtN = int( sqrt( N ) );
    for( i = 3; i <= sqrtN; i += 2 )
    {
        if( Check(status[i>>5],i&31)==0)
        {
            for( j = i*i; j <= N; j += (i<<1) )
            {
                status[j>>5]=Set(status[j>>5],j & 31);
            }
        }
    }
    prime[total++] = 2;
    for(i=3; i<=N; i+=2)
    {
        if( Check(status[i>>5],i&31)==0 )
            prime[total++] = i;
    }
}



ll res = 1;
void prime_factorize(ll n)
{
    for(ll i=0; prime[i] * prime[i] <= n; i++)
    {
        if(n%prime[i]==0)
        {
            ll cnt = 0;
            while(n % prime[i] == 0)
            {
                // cout << spf[i] << "; ";
                if(n%2==1)
                    ++cnt;
                //++mp[prime[i]];
                n /= prime[i];
            }
            res*=(cnt+1);
        }
    }
    if(n > 1)
    {
        //cout << n << "\n";
        //++mp[n];
        res*=2;
    }
}


int main()
{
    sieve();
    ll  n,i,j,k,l;
    while(scanf("%lld",&n)==1)
    {
        res = 1;
        if(n==0)
            printf("1\n");
        else
        {
            prime_factorize(n);
            printf("%lld\n",res);
        }

    }
}
