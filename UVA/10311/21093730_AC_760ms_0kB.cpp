#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+1;
int isprime[N];
int cnt;
int prime[N];
int check[N];


void sieve()
{
    int i, j, sqrtN;
    for( i = 2; i <= N >> 1; i++ )
        isprime[i] = 0;
    sqrtN = int( sqrt((double)N) );
    for( i = 3; i <= sqrtN; i += 2 )
    {
        if(isprime[i>>1] == 0 )
        {

            for( j = i * i; j <= N; j += i + i )
                isprime[j>>1] = 1;
        }
    }
    prime[cnt++] = 2;
    for( i = 3; i <= N; i += 2 )
    {
        if( isprime[i>>1] == 0 )
            prime[cnt++] = i;
    }
}

int Solve(int n)
{
    if(n < 2)
        return 0;
    int sq, i;
    sq = sqrt(n)+1;
    for(i = 0; prime[i]<=sq; i++)
        if(n%prime[i] == 0)
            return 0;
    return 1;
}

int main()
{
    //freopen("output.txt","w",stdout);
    sieve();
    int t,cas = 0;
    int n,c=1;
    while(scanf("%d",&n)==1)
    {
        n = abs(n);
        c = 1;

        int ans = 0,mn=999999990,x,y;
        if(n<=2)
        {
            printf("%d is not the sum of two primes!\n",n);
            continue;
        }
        else if(n%2==1)
        {
            if(Solve(n-2)==1)
                printf("%d is the sum of %d and %d.\n",n,2,n-2);
            else
                printf("%d is not the sum of two primes!\n",n);
        }
        else
        {
            for(int i=n/2-1; i>=0; i--)
            {
                if(Solve(n-i)==1 && Solve(i)==1 )
                {
                    c = 0;
                    x = min(i,n-i);
                    y = max(i,n-i);
                    break;
                }


            }

            if(c)
            {
                printf("%d is not the sum of two primes!\n",n);
            }
            else
            {
                printf("%d is the sum of %d and %d.\n",n,x,y);
            }
        }
    }
    return 0;
}
