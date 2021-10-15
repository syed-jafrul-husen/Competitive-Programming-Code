#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll divisor[1000006];
ll RES[1000006];
bool p[1000006];
vector<ll> prime;
ll N = 1000006;
void sieve()
{
    ll i,j,k;
    for(i=2; i<N; i++)
        p[i]=1;
    for(i=2; i<N; i++)
    {
        if(p[i]==0) continue;
        divisor[i] = 0;
        prime.push_back(i);
        for(j=i*2; j<N; j+=i)
            p[j]=0;
        j = 1;
        for(k=i*i; k<N; k=i*i*j)
        {
            divisor[k]=0;
            ++j;
        }
    }
}

int main()
{
    ll i,c=0,j,k;
    for(i=2; i<1000006; i++)
        divisor[i]=1;
    sieve();
    for(i=2; i<=1000000; i++)
    {
        if(divisor[i]==1)
        {
            RES[c] = i;
            ++c;
        }
    }
    i = 107;
    while(i<c)
    {
        cout<<RES[i]<<endl;
        i+=108;
    }
    return 0;
}
