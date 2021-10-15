#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll status[(10000002/32)+2];
ll N = 10000002;
ll prime[10000002];
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

ll solve(ll n)
{

}

int main()
{
    sieve();
    ll  n,i,j,k,l,m,t,res=0;
    scanf("%lld",&t);
    while(t--)
    {
        ll c = 0;
        scanf("%lld%lld",&n,&m);
        for(i=0; i<total; i++)
        {
            k = prime[i];
            while(1)
            {
                k*=prime[i];
                if(k>=n && k<=m)
                    ++c;
                else if(k>m)
                    break;
            }
        }
        printf("%lld\n",c);
    }
}
