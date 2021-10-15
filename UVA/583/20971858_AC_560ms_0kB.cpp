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



vector<ll>vt;
ll res = 1;
void prime_factorize(ll n)
{
    ll t=0;
    for(ll i=0; prime[i] * prime[i] <= n; i++)
    {
        if(n%prime[i]==0)
        {
            ll cnt = 0;
            while(n % prime[i] == 0)
            {
                vt.push_back(prime[i]);
                n /= prime[i];
            }
            res*=(cnt+1);
        }
    }
    if(n > 1)
    {
        vt.push_back(n);
    }
}


int main()
{
    sieve();
    ll  n,i,j,k,l;
    while(1)
    {
        ll t = 1,x,i;
        scanf("%lld",&x);
        if(x==0)
            break;
        printf("%lld = ",x);
        if(x==1)
        {
            printf("1\n");
            continue;
        }
        if(x<0)
        {
            printf("-1");
            x*=-1;
              t = 0;
        }
        prime_factorize(x);
         sort(vt.begin(),vt.end());
        int sz = vt.size();
        for(i=0; i<sz; i++)
        {
            if(i==sz || t==1)
            {
                printf("%lld",vt[i]);
                t = 0;
            }
            else
            {
                printf(" x %lld",vt[i]);
                t = 0;
            }

        }
        printf("\n");
        vt.clear();

    }
}
