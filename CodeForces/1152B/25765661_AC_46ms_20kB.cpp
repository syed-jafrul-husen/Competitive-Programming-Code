#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll x,n,ans=0,p=0,i,j,k;
    ll pow[45];
    vector<ll>vt;

    pow[0] = 1;
    for(i=1; i<=20; i++)
        pow[i] = pow[i-1]*2;
    cin>>x;
    while(1)
    {
        ll tmp = x,f=-1,cnt=0;
        while(tmp)
        {
            ++cnt;
            if(tmp%2==0)
                f = cnt;
            tmp/=2;
        }
        //cout<<x<<" "<<f<<" "<<cnt<<endl;
        if(f==-1)
            break;
        ++ans;
        if(ans%2==0)
        {
            ++x;
        }
        else
        {
            x = x^(pow[f]-1);
            vt.push_back(f);
        }
    }
    cout<<ans<<endl;
    ll sz= vt.size();
    for(i=0; i<sz; i++)
        cout<<vt[i]<<" ";
}
