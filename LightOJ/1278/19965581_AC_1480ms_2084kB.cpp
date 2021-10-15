#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll ans;

void factor(ll n)
{
    ans = 1;
    ll i;
    while(n%2==0)
        n/=2;
    for(i=3; i*i<=n; i+=2)
    {
        int cnt = 0;
        while(n%i==0)
        {
            n/=i;
            ++cnt;
        }
        ans = ans*(cnt+1);
    }
    if(n>2)
        ans = ans*2;
}

int main()
{
    ll t,n,i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n;
        factor(n);
        cout<<"Case "<<i+1<<": "<<ans-1<<endl;
    }
    return 0;
}
