#include <bits/stdc++.h>
using namespace std;
int status[100000001];
int prime[100000001];
int N = 100000001;
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
    prime[2] = 1;
    for(i=3; i<=N; i+=2)
    {
        if( Check(status[i>>5],i&31)==0 )
            prime[i] = 1;
    }
}
 
 
int main()
{
    sieve();
    int x,y,z,p,i;
    for(i=1; i<=100000000; i++)
    {
        prime[i] = prime[i]+prime[i-1];
    }
    while(1)
    {
        scanf("%d",&x);
        if(x==0)
            break;
        double d;
        p = prime[x];
        d = abs(p-((x*1.0)/log(x)))/(p*1.0);
        d = d*100;
        printf("%.1lf\n",d);
    }
}