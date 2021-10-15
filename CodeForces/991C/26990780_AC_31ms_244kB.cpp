#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool check(ll n,ll k)
{
    ll sm=0,x=n;
    while(n>0)
    {
        ll t = min(n,k);
        sm = sm + t;
        n-=t;
        n = n- (n/10);
    }
    if(sm*2>=x)
        return true;
    return false;
}


ll binarySearch(ll n)
{
    ll b=1,e=n,mid,ans=n;

    while(e>=b)
    {
        mid = (b+e)/2;
       // cout<<mid<<" "<<b<<" "<<e<<endl;
        if(check(n,mid))
        {
            ans = min(ans,mid);
            //cout<<"mid = "<<mid<<endl;
            e = mid-1;
        }
        else
            b = mid+1;
    }
    return ans;
}

int main()
{
    ll n,i,j,k;
    cin>>n;
    ll ans = binarySearch(n);
    cout<<ans<<endl;

}
