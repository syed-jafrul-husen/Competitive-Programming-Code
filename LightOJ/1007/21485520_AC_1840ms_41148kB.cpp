#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
ll a[5000006];

void phi(ll n)
{
    for(ll i=1; i<=n; i++)
    {
        a[i] = i;
    }
    for(ll p=2; p<=n; p++)
    {
        if(a[p]==p)
        {
            a[p] = p-1;
            for(ll i=2*p; i<=n; i+=p)
                a[i] = (a[i]/p)*(p-1);
        }
    }
}

int main()
{
    phi(5000001);

    for(ll i=0; i<=5000001; i++)
        a[i] = a[i]*a[i];
    for(ll i=1; i<=5000001; i++)
        a[i] = a[i]+a[i-1];
    ll n,i,j,k,l,x,y;
    cin>>n;

    for(i=1; i<=n; i++)
    {
        cin>>x>>y;
        if(x>y)
            swap(x,y);
        ll z = a[y]-a[x-1];;

            //z = z+(a[j]*a[j]);
        printf("Case %llu: %llu\n",i,z);
    }


}

