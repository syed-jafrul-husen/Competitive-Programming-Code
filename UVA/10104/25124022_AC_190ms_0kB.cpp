#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll d,x,y;

void extendedEuclid(ll a,ll b)
{
    if(b==0)
    {
        d = a;
        x = 1;
        y = 0;
        return;
    }
    else
    {
        extendedEuclid(b,a%b);
        ll temp = x;
        x = y;
        y = temp - (a/b)*y;
    }
}

int main()
{
    ll a,b;
    while(cin>>a>>b)
    {
        extendedEuclid(a,b);
        if(a==b)
        {
            x = 0;
            y = 1;
        }
        cout<<x<<" "<<y<<" "<<d<<endl;
    }
}
