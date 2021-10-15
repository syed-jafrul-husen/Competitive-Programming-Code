#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll status[(100000000/32)+2];
ll N = 100000000;
ll prime[100000000];
ll total = 1;

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
    ll m = n;
    cout<<n<<" = ";
    vector<ll>vt;
    map<ll,ll>mp;
    map<ll,ll>::iterator it;
    for(ll i=1; prime[i] * prime[i] <= n; i++)
    {
        if(n%prime[i]==0)
        {
            while(n % prime[i] == 0)
            {
                vt.push_back(prime[i]);
                ++mp[prime[i]];
                n /= prime[i];
            }
        }
    }
    if(n>1) {
        ++mp[n];
        vt.push_back(n);
    }
    ll x = 1;
    for(it=mp.begin(); it!=mp.end(); it++)
    {
        x = x*(it->second+1);
    }
    sort(vt.begin(),vt.end());
    ll sz = vt.size();
    cout<<vt[0];
    for(ll i=1; i<sz; i++)
    {
        cout<<" * "<<vt[i];
    }
    printf("\nWith %lld marbles, %lld different rectangles can be constructed.\n",m,(x+1)/2);
}


int main()
{
    sieve();
    ll i,j,x,n,k;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        NOD(n);
    }
}
