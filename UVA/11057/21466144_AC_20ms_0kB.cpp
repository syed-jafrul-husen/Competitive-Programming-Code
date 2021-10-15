#include<bits/stdc++.h>
using namespace std;
long long a[1000003],ans[1000003];
int main()
{
    long long n,t,te=0,i,x,y;
    while(scanf("%lld",&n)==1)
    {

        for(i=0; i<1000003; i++)
            ans[i] = 0;
        for(i=0; i<n; i++){
            scanf("%lld",&a[i]);
            ans[a[i]] = 1;}
        scanf("%lld",&te);

        for(i=(te+1)/2; i>=0; i--)
        {
           if(ans[i]==1 && ans[te-i]==1)
           {
               x = min(i,abs(te-i));
               y = max(i,abs(te-i));
               break;
           }
        }
        printf("Peter should buy books whose prices are %lld and %lld.\n\n",x,y);
    }



    return 0;
}
