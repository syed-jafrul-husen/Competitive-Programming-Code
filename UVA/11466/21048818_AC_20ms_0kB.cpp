#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll c,res=-1;

void PrimeDivisor(ll n)
{
    ll i;
    res  = -1;
    for (i=2; i*i<=n; i++)
    {
        while (n%i == 0)
        {
            n /= i;
            res = i;
            //cout<<n<<" "<<i<<endl;
        }
        if(res==i)
            ++c;
        if(n==1)
            break;
    }
    if(n>2){
            ++c;
        res = n;}
}

int main()
{
    ll  n,i,j,k,l;
    while(1)
    {
        c = 0;
        ll t = 1,x,i,sz=0,mx=0;
        scanf("%lld",&n);
        n = abs(n);
        if(n==0)
            break;
        PrimeDivisor(n);
        if(c>1)
            printf("%lld\n",res);
        else
            printf("-1\n");
    }
}
