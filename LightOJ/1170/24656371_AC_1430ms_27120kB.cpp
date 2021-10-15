#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
ll ps[203800],c=0;
 
 
ll mod = 100000007;
 
void perfectSquare()
{
    c = 0;
    for(ll i=2; i<=100001; i++)
    {
        ll num = i*i;
        while(num<=10000000001L)
        {
            ps[c++] = num;
            num*=i;
        }
    }
    sort(ps,ps+c);
    c = unique(ps,ps+c) - ps;
}
ll fac[2*1000010];
ll cat[1000010];
 
ll modMulInverse(ll n)
{
    ll res=1,y = mod-2,x=n;
    while (y > 0)
    {
        if (y & 1)
            res = ((res%mod)*(x%mod))%mod;
        y = y>>1;
        x = ( (x%mod)*(x%mod) )%mod;
    }
    return res;
}
void genCatalan()
{
    fac[0] = 1;
    fac[1] = 1;
    for(ll i=2; i<2*1000010; i++)
        fac[i] = (fac[i-1]*i)%mod;
 
    cat[0] = 1;
    cat[1] = 1;
    for(ll i=2; i<1000010; i++)
    {
        cat[i] = fac[2*i];
        ll t = (fac[i+1]*fac[i])%mod;
        //cout<<t<<endl;
        t = modMulInverse(t);
        // cout<<t<<endl;
 
        cat[i] = (cat[i]*t)%mod;
    }
}
 
int main()
{
 
    perfectSquare();
    ps[c++] = 10000000100;
    genCatalan();
//    for(int i=0; i<=10; i++)
//        cout<<cat[i]<<" ";
 
//    for(ll i=0; i<20; i++)
//        cout<<ps[i]<<" ";
//    cout<<c<<endl;
    ll t,a,m,i,j,k,b;
    scanf("%lld",&t);
    for(int tc=1; tc<=t; tc++)
    {
        scanf("%lld%lld",&a,&b);
        ll x = lower_bound(ps,ps+c,a)-ps;
        ll y = upper_bound(ps,ps+c,b)-ps;
        //cout<<x<<" "<<y<<endl;
        ll n = y-x;
        if(n<0)
            n = 0;
        cat[0] = 0;
        printf("Case %d: %lld\n",tc,cat[n]);
    }
}
 