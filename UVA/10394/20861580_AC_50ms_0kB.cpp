#include<bits/stdc++.h>
using namespace std;
int status[(20000002/32)+2];
int N = 20000002;
int prime[20000002];
int total = 0;

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
    for(i=3; i<=N; i+=2)
    {
        if( Check(status[i>>5],i&31)==0 )
            prime[++total] = i;
    }
}
int main()
{
     sieve();
    vector<pair<int,int> >vt;
    int t,i,j,k,n,m;
    int sz = 0;
    for(i=0; i<total-1; i++)
    {
        if(prime[i]==prime[i+1]-2)
        {
            vt.push_back(make_pair(prime[i],prime[i+1]));
            ++sz;
        }
    }
    while(scanf("%d",&n)==1)
    {
            printf("(%d, %d)\n",vt[n-1].first,vt[n-1].second);
    }
    return 0;
}
