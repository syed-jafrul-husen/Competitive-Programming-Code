#include<bits/stdc++.h>
using namespace std;
#define ll long long

double bisection(double x,double y,double h)
{
    double lo=0.0,hi=min(x,y),m;
    for(; ; )
    {
        m = (lo+hi)/2.0;
        double h1 = sqrt((y*y-(m*m)));
        double h2 = sqrt((x*x)-(m*m));
        double t = (h1*h2)/(h1+h2);
        if(abs(t-h)<=0.0000001)
        {
            return m;
        }
        else if(t<h)
        {
            hi = m;
        }
        else
            lo = m;
    }
    return m;
}

int main()
{
    ll t,i,j,k;
    cin>>t;
    double x,y,h;
    for(i=1; i<=t; i++)
    {
        cin>>x>>y>>h;
        printf("Case %lld: %.7lf\n",i,bisection(x,y,h));
    }
}
