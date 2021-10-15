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
    int t,cas = 0;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int ans = 0;
        for(int i = 0; i < cnt && prime[i] <= n/2; i++)
        {
            if(isprime[n-prime[i]])
                ans++;
        }
        printf("Case %d: %d\n",++cas,ans);
    }
    return 0;
}
