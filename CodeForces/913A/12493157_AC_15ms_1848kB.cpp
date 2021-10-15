#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,a=1,i;
    scanf("%lld%lld",&n,&m);
    if(n<28)
    {
        for(i=0; i<n; i++)
        {
            a = a*2;
        }
        printf("%lld\n",m%a);
    }
    else
        printf("%lld\n",m);
    return 0;

}



