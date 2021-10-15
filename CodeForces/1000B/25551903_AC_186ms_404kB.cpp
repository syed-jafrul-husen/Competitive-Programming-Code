#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,a,b,c,d,i,j,k,t;
    cin>>n>>k;
    vector<int>vt(n+2,0);
    for(i=0; i<n; i++)
    {
        cin>>vt[i+1];
    }
    vt[n+1] = k;
    ll mx = 0,op=0,of=0;

    for(i=n; i>=0; i--)
    {
        if(i%2==0)
            op = op + vt[i+1]-vt[i];
        else
            of = of + vt[i+1]-vt[i];
        mx = max(mx,of-op);
       // cout<<i<<" "<<mx<<endl;
    }
    if(mx==0)
        cout<<op<<endl;
    else
        cout<<op+mx-1<<endl;
}
