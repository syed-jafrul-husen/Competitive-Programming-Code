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




int main()
{
    sieve();
    ll  n,i,j,k,l,t,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        while(1)
        {
            ll sm = 0,sm2 = 0;
            ++n;
            m = n;
            ll x = n;
            while(m!=0)
            {
                sm = sm+(m%10);
                m/=10;
            }
            for(ll i=0; prime[i] * prime[i] <= x; i++)
            {
                if(x%prime[i]==0)
                {
                    ll cnt = 0;
                    while(x % prime[i] == 0)
                    {
                        x /= prime[i];
                        m = prime[i];
                       // cout<<prime[i]<<endl;
                        while(m!=0)
                        {
                            sm2 = sm2+(m%10);
                            m/=10;
                        }
                    }
                }
            }
            if(x > 1)
            {
              //  cout<<x<<endl;
                m = x;
                while(m!=0)
                {
                    sm2 = sm2+(m%10);
                    m/=10;
                }
            }
            //cout<<sm<<" "<<sm2<<endl;
            if(sm==sm2 && x!=n)
                break;
        }
        cout<<n<<endl;


    }
}
