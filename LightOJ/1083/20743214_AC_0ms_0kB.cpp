#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[200005];
int main()
{
    ll n,m,i,j,k,l,x,y,t,c=0,cnt=0;
    scanf("%lld",&t);
    for(k=1; k<=t; k++)
    {
        cnt = 0;
        scanf("%lld",&n);
        for(i=0; i<n; i++)
            scanf("%lld",&a[i]);
        for(i=0; i<n; i++)
        {
            c = 0;
            for(j=i; j<n; j++)
            {
                if(a[j]>=a[i])
                    ++c;
                else
                    break;
            }
            for(j=i-1; j>=0; j--)
            {
                if(a[j]>=a[i])
                    ++c;
                else
                    break;
            }
            cnt = max(cnt,c*a[i]);
        }
        printf("Case %lld: %lld\n",k,cnt);
    }
}


