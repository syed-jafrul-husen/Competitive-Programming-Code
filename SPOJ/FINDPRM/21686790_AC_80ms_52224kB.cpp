#include <bits/stdc++.h>
using namespace std;

#define MAX 10000000
int prefix[MAX + 2];
bool flag[MAX+2];

void sieve()
{
    int i,j,total=0,val;
    val = sqrt(MAX)+1;
    flag[1] = 1;//if a is not prime;
    for(i=2; i<val; i++)
        if(flag[i]==0)
            for(j=i; i*j<=MAX; j++)
                flag[i*j]=1;
    prefix[0] = prefix[1] = 0;
    for (int p = 2; p <= MAX; p++)
    {
        prefix[p] = prefix[p - 1];
        if (flag[p]==0)
            prefix[p]++;
    }
}

int main()
{
    sieve();
    int t,n,i;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&n);
        int L = n/2+1, R = n;
        int ans = prefix[R] - prefix[L - 1];
        printf("%d\n",ans);
    }
    return 0;
}
