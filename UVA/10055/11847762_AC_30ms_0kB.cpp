#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long b,a;

    while(scanf("%lld%lld",&a,&b)==2)
    {

        if(a<0)
            a = -a;
        if(b<0)
            b = -b;
        if(a>b)
            printf("%lld\n",a-b);
        else
            printf("%lld\n",b-a);

    }
    return 0;
}
