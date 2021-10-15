#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t,n,m,i,j,k,q,l,r;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld%lld",&n,&q);
        vector<ll>vt;
        vector<ll>::iterator it,it2;
        while(n--)
        {
            scanf("%lld",&k);
            vt.push_back(k);
        }
        //sort(vt.begin(),vt.end());
        printf("Case %lld:\n",i);
        while(q--)
        {
            scanf("%lld%lld",&l,&r);
            it = lower_bound(vt.begin(),vt.end(),l);
            it2 = upper_bound(vt.begin(),vt.end(),r);
            printf("%d\n",( it2-vt.begin()) - ( it-vt.begin()) );
        }
    }
}
