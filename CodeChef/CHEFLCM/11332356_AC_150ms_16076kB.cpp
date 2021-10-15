#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,t,i,j,ans=0;
    scanf("%lld",&t);
    for(i=0; i<t; i++)
    {
        ans = 0;
        scanf("%lld",&n);
        for(j=1; j*j<=n; j++)
        {
            if(n%j==0)
            {
                if(n/j==j)
                {
                    ans = ans+j;
                }
                else
                {
                    ans = ans+j;
                    ans = ans + n/j;
                }
            }
        
        }

        printf("%lld\n",ans);
    }

}
