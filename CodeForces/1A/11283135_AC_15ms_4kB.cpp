#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,a,b,c,ans=1;
    scanf("%lld%lld%lld",&n,&m,&a);
    b = n/a;
    c = m/a;
    if((n%a)!=0)
        ans = (b+1)*ans;
    else if((n%a)==0)
        ans = b*ans;
    if((m%a)!=0)
        ans = (c+1)*ans;
    else if((m%a)==0)
        ans = c*ans;
    printf("%lld\n",ans);
}
