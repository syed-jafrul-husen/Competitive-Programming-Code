#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,i,j,k,c=0,c2,p;
    cin>>k;
    ll area = 0;
    while(k--)
    {
        cin>>p;
        ll a[p+2],b[p+2];
        ll ans = 0,ans2=0;
        for(i=0; i<p; i++)
        {
            cin>>a[i]>>b[i];
        }
        a[p] = a[0];
        b[p] = b[0];
        for(i=0; i<p; i++)
        {
            ans = ans +  (a[i]*b[i+1]);
            ans2+=(a[i+1]*b[i]) ;
        }
        area = area + abs(ans-ans2);
    }
    cout<< area/2 <<endl;
}
