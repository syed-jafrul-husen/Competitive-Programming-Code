#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long n,k,t,c=0,i;
   scanf("%lld%lld",&n,&k);
   for(i=0; i<n; i++)
   {
       scanf("%lld",&t);
       if(t%k==0)
       {
           ++c;
       }
   }
   printf("%lld\n",c);
    return 0;
}
