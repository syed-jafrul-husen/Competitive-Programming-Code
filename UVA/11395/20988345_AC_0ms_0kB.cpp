#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll sm=0;
/*
void Divisors(int n)
{
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            if (n/i == i)
                sm+=i;
            else
            {
                sm+=i;
                sm+=(n/i);
            }
        }
    }
}
*/
int main()
{
    //Divisors(12);
    ll a,b,c,n,i,j,k;
    while(scanf("%lld",&n))
    {
        if(n==0)
            break;
        a = sqrt(n);
        //cout<<a<<endl;
        b = sqrt(n/2);
        n-=a;
        n-=b;
        printf("%lld\n",n);
    }

    return 0;
}
