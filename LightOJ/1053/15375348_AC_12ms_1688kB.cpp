#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,i,j,k,a,b,c,d,e,f;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>a>>b>>c;
        a = a*a;
        b = b*b;
        c = c*c;
        if( (a==(b+c)) || (b==(a+c)) || (c==(a+b)) )
            printf("Case %lld: yes\n",i+1);
        else
            printf("Case %lld: no\n",i+1);
    }
}
