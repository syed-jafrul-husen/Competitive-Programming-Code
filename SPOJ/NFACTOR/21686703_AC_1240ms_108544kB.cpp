#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll status[(1000006/32)+2];
ll N = 1000006;
ll prime[1000006];
ll total = 1;
ll pq[1000006];
ll RES[1000006];

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
ll nod;

void NOD(ll n)
{
    map<ll,ll>mp;
    map<ll,ll>::iterator it;
    for(ll i=1; prime[i] * prime[i] <= n; i++)
    {
        if(n%prime[i]==0)
        {
            while(n % prime[i] == 0)
            {
                ++mp[prime[i]];
                n /= prime[i];
            }
        }
    }
    if(n > 1)
    {
        ++mp[n];
    }
    nod = mp.size();
}
vector<ll>vt[12];
ll ans[12][1000007];

int main()
{
    sieve();
    ll i,j,x,n,k,t,a,b;
    ll cnt = 0;

    for(i=0; i<12; i++)
    {
        for(j=0; j<=1000006; j++)
            ans[i][j] = 0;
    }
    for(i=1; i<=1000000; i++)
    {
        NOD(i);
        if(nod<=10)
        {
            vt[nod].push_back(i);
        }
    }
    for(i=0; i<=10; i++)
    {
        ll sz = vt[i].size();
        for(j=0; j<sz; j++)
        {
            ans[i][vt[i][j]] = 1;
        }
        for(j=1; j<=1000005; j++)
        {
            ans[i][j] = ans[i][j]+ans[i][j-1];
        }
    }
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n;
        cout<<ans[n][b]-ans[n][a-1]<<endl;
    }
}
