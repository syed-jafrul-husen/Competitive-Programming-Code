#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t,n,i,j,s,te;
    //string str,s;

    scanf("%lld",&te);


    while(te--)
    {
        scanf("%lld%lld%lld",&n,&s,&t);
        ll k = min(t,s);
        k = n-k;
        ++k;
        printf("%lld\n",k);
    }


}

