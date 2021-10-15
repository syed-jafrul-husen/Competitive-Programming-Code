#include<bits/stdc++.h>
using namespace std;

#define ll long long

void bisection(double a,double b)
{
    double m,lo=0,hi=400,theta,s,x,ac,len,wid,r;
    for( ; ;)
    {
        len = (lo+hi)/2;
        wid = (b/a)*len;
        ac = sqrt((len*len)+(wid*wid));
        r = ac/2.0;
        theta = acos( ((r*r)+(r*r)-(wid*wid))/(2.0*r*r) );
        s = r*theta;
        s = 2*s+2*len;
        if(abs(s-400)<=0.0000001)
            break;
        else if(s>400)
            hi = len;
        else
            lo = len;
    }
    printf("%.8lf %.8lf\n",len,wid);
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
