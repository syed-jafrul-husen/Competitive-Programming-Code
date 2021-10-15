#include<bits/stdc++.h>
using namespace std;

#define sz 10000002
long long bs[sz+2];

void sieve()
{
    long long i,j;
    bs[0] = 1;
    bs[1] = 1;
    for(i=4; i<sz; i+=2)
        bs[i]=1;
    for(i=3; i*i<sz; i+=2)
    {
        if(!bs[i])
        {
            for(j=i*i; j<sz; j=j+(2*i))
            {
                bs[j]=1;
            }
        }
    }
}

int main()
{
    sieve();
    long long n,a,i,j,k,b,c=0;
    scanf("%lld",&n);

    for(i=0; i<n; i++)
    {
        c = 0;
        b = 0;
        scanf("%lld",&a);
        k = sqrt(a);

        b = 1;
        if(k *k == a)
        {
            b = bs[k];
            if(b==0)
                ++c;
        }
        if(c==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
