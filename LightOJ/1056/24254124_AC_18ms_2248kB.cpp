#include<bits/stdc++.h>
using namespace std;

#define ll long long

void bisection(double a,double b)
{
    double m,l=0,r=400,theta,s,x,ac;
    ac = sqrt( (a*a)+(b*b) );
    r = ac/2.0;
    theta = acos( ((r*r)+(r*r)-(b*b))/(2.0*r*r) );
    s = r*theta;
    x = 400/(2*s+2*a);
    printf("%.8lf %.8lf\n",a*x,b*x);
}

int main()
{
    ll t,n,m,i,j,k;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        string s;
        double a,b;
        cin>>a>>s>>b;
        printf("Case %lld: ",i);
         bisection(a,b);
    }
}
