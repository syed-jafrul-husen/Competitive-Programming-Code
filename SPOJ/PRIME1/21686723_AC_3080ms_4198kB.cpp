#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(ll k)
{
    if(k<2)
        return false;
    for(ll j=2; j*j<=k; j++)
        if(k%j==0)
            return false;
    return true;
}
int main()
{
    ll n,m,t,te=0,i,j,k,x,y,a,b;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&a,&b);
        for(i=a; i<=b; i++)
        {
            if(check(i))
            {
                printf("%lld\n",i);
            }
        }
        if(t>0)
            printf("\n");
    }

}
