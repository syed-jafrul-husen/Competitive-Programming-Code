#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e7+1;
const int N = 1e6;
bool isprime[maxn];
int cnt;
int prime[N];
void sieve()
{
    memset(isprime,true,sizeof(isprime));
    cnt = 0;
    isprime[0] = isprime[1] = false;
    for(int i = 2; i < maxn; i++)
    {
        if(isprime[i])
        {
            prime[cnt++] = i;
            for(int j = i + i; j < maxn; j += i)
            {
                isprime[j] = false;
            }
        }
    }
}
int main()
{
    sieve();
    int t,n,i;
    while(scanf("%d",&n)==1)
    {
        if(n<8) {
            printf("Impossible.\n");
            continue;
        }
        printf("2 ");
        n-=2;
        if(n%2) {
            printf("3 ");
            n-=3;
        }
        else {
            printf("2 ");
            n-=2;
        }
        for(i=0; i < cnt && prime[i] <= n/2; i++)
        {
            if(isprime[n-prime[i]]) {
                printf("%d %d\n",prime[i],n-prime[i]);
                break;
            }
        }
    }
    return 0;
}
