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
                //cout<<prime[i]<<endl;
            }
        }
    }
    if(n > 1)
    {
        //cout<<n<<endl;
        ++mp[n];
    }
    nod = 1;
    //cout<<nod<<endl;
    for(it=mp.begin(); it!=mp.end(); it++)
    {
        nod = nod*(it->second +1);
    }
    //cout<<nod<<endl;
}


int main()
{
    sieve();
    ll i,j,x,n,k;
    for(i=1; i<total; i++)
    {
        for(j=1; j<total; j++)
        {
            if(i!=j)
            {
                x = prime[i]*prime[j];
                if(x>1000000)
                    break;
                pq[x] = 1;
            }
        }
    }
    ll cnt = 0;
    for(i=4; i<=1000000; i++)
    {
        NOD(i);
        if(pq[nod]==1)
        {
            RES[cnt] = i;
            ++cnt;
        }
    }
    i=8;
    while(i<cnt)
    {
        cout<<RES[i]<<endl;
        i+=9;
    }
}
