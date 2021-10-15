#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t,i,j,k;
    scanf("%lld",&t);
    while(t--)
    {
        ll n,b;
        scanf("%lld%lld",&n,&k);
        b = k;
        ll p[k+2],ans[k+2];
        for(i=1; i<=k; i++)
        {
            scanf("%lld",&p[i]);
            ans[i] = p[i];
        }

        for(i=2; i<=k; i++)
        {
            for(j=1; j<i; j++)
            {
                if(p[i-j]==-1 || ans[j]==-1)
                    continue;
                if(ans[i]==-1)
                    ans[i] = ans[j]+p[i-j];
                else
                    ans[i] = min(ans[i],ans[j]+p[i-j]);
            }
        }
        if(k==0)
            printf("0\n");
        else
            printf("%lld\n",ans[k]);

    }
}
