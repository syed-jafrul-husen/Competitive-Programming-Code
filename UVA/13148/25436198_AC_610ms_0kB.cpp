#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,i,j,k,tc=1;
    map<ll,ll>mp;
    for(i=1; i<=1000000; i++)
    {
        ++mp[i*i];
        ++mp[i*i*i];

    }
    while(1)
    {
        scanf("%lld",&n);
        if(n==0)
            break;
        if(mp[n]>=2)
            printf("Special\n");
        else
            printf("Ordinary\n");
    }


    //printf("Case %lld: ",tc++);
}
