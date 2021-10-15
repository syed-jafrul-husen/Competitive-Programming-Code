#include<bits/stdc++.h>
using namespace std;
long long arr[100000000];
int main()
{
    long long a,b,c,t,d,e,f,g,i,j,k;
    scanf("%lld",&t);
    for(i=0; i<t; i++)
    {
        scanf("%lld%lld",&a,&b);
        f=0;
        for(j=a; j<=b; j++)
        {
            e = 0;
            for(k=1; k*k<=j; k++)
            {
                if(j%k==0)
                {
                    if(j/k==k)
                    {
                        d = j;
                        ++e;
                    }
                    else
                    {
                        d=j;
                        e = e+2;
                    }
                }
            }

            if(e>f)
            {
                f = e;
                g = d;
            }
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",a,b,g,f);
    }
}
