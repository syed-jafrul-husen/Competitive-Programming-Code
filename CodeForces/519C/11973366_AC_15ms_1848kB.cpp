#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,b,i,t,c=0;
    scanf("%lld%lld",&n,&b);
    t = n;
    while(1)
    {
        if(b>=n)
        {
            n = n-1;
            b = b-2;
            if(n>=0 && b>=0)
                ++c;
        }
        else
        {
            n = n-2;
            b = b-1;
            if(n>=0 && b>=0)
                ++c;
        }
        if(n<=0 && b<=0)
            break;
    }
    printf("%lld\n",c);
}
