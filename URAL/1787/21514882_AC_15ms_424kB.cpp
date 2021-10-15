#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll a[1000+2][1000+2],b[1000+2];

int main()
{
    ll n,m,t,i,j,k,x,ans;
    cin>>k>>n;
    ans = 0;
    while(n--)
    {
        cin>>x;
        if(ans+x>k)
            ans = ans+x-k;
        else
            ans = 0;
    }
    cout<<ans<<endl;

}
