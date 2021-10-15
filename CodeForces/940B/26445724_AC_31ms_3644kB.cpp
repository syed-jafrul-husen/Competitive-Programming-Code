#include <iostream>
using namespace std;
#define ll long long

int main()
{
    ll n,a,b,i,j,k,x,c=0,t;
    cin>>n>>k>>a>>b;
    x = n;
    if(k==1)
    {
        if(x!=1)
            c = a*(x-1);
        cout<<c<<endl;
        return 0;
    }
    while(x!=1)
    {
        if(x%k!=0)
        {
            c = c+ (a*(x%k));
            x-=(x%k);
            if(x==0)
                c = c - a,x=1;
        }
        if(x%k==0)
        {
            t = x-(x/k);
            if(a*t<b)
            {
                c = c + (a*t);
            }
            else
            {
                c = c + b;
            }
            x/=k;
        }
    }
    cout<<c<<endl;
    return 0;
}
