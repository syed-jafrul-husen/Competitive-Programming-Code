#include<bits/stdc++.h>
using namespace std;
#define nSize 1000002
#define pSize 1000002

int flag[nSize+5];
int prime[pSize+5];
int total = 0;
void sieve()
{
    int i,j,val;
    val = sqrt(nSize)+1;
    flag[1] = 1;
    for(i=2; i<val; i++)
        if(flag[i]==0)
            for(j=i; i*j<=nSize; j++)
                flag[i*j]=1;

    for(i=2; i<nSize; i++)
        if(flag[i]==0)
            prime[total++]=i;
}


int dp[nSize+6];

void digitPrime()
{
    int k,sm=0,m,i;
    for(i=0; i<total; i++)
    {
        k = prime[i];
        while(k!=0)
        {
            sm = sm+(k%10);
            k/=10;
        }
        if(flag[sm]==0)
            ++dp[prime[i]];
        sm = 0;
    }
}

int main()
{
    int i,k,a,b,t;
    sieve();
    digitPrime();
    for(i=1; i<=1000000; i++)
        dp[i] = dp[i]+dp[i-1];
    scanf("%d",&t);

    for(i=0; i<t; i++)
    {
        scanf("%d%d",&a,&b);
        k = dp[b]-dp[a-1];
        printf("%d\n",k);
    }
}
