#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,i,j,k,b;
    cin>>t;
    double R,n,r;
    for(ll tc=1; tc<=t; tc++)
    {
        cin>>R>>n;
        r = ( R*sin(acos(-1.0)/n) ) / (1+sin(acos(-1.0)/n)) ;
        printf("Case %lld: %.8lf\n",tc,r);
    }
}