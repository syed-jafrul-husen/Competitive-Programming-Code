#include <bits/stdc++.h>
using namespace std;
int status[1000002];
vector<int>prime;
int N = 1000005;
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
    prime.push_back(2);
    for(i=3; i<=N; i+=2)
    {
        if( Check(status[i>>5],i&31)==0 )
            prime.push_back(i);
    }
}
int factorization(int n)
{
    int sq,i,j;
    sq = sqrt(n);
    int mx=0;
    for(i=0; i<=sq; i++)
    {
        int c = 0;
        if(n%prime[i]==0)
        {
            while(n%prime[i]==0)
            {
                n/=prime[i];
                ++c;
            }
        }
        mx = max(c,mx);
    }
    if(mx==0)
        mx = max(1,mx);
    return mx;
}
 
int main()
{
    sieve();
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%d\n",factorization(n));
    }
}