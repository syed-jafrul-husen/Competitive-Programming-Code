#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,c=2;
    scanf("%lld",&n);
    if(n==1)
        printf("1\n");
    else if(n==2)
        printf("2\n");
    else
    {
        if(n<8)
        {
            if(n%2==1)
                n = n+1;
            n = n/2;
            printf("%lld\n",n);
        }
        else
        {
            if(n%2==1)
                n = n+1;
            else
                n = n+2;
            n = n/2;
            printf("%lld\n",n);
        }

    }
    return 0;
}