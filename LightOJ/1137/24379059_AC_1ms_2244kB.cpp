#include<bits/stdc++.h>
using namespace std;

#define ll long long

double cal(double c,double b)
{
    //double temp = (( (c*c)/(2.0*b) )+(b/2.0));
    return ( (( (c*c)/(2.0*b) )+(b/2.0)) *2*asin(c/(1.0*(( (c*c)/(2.0*b) )+(b/2.0)))));
}

double bisection(double s,double c)
{
    double b=0,e=s+2,m;
    int tc = 65;
    while(tc--)
    {
        m = (b+e)/2.0;
        double x = cal(c,m);
        if(s>x)
            b = m;
        else
            e = m;
    }
    return m;

}

int main()
{
    ll t,i,j,k;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        double L,n,c;
        cin>>L>>n>>c;
        double s = (1+n*c)*L;
        double b = bisection(s,L/2.0);
        printf("Case %lld: %.7lf\n",i,b);
    }
}
