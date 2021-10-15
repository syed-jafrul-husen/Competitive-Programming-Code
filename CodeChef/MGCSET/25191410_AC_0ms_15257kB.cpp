#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t,n,m,i,j,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        ll c = 0;
        for(i=0; i<n; i++)
        {
            cin>>k;
            if(k%m==0)
                ++c;
        }
            c = powl(2,c)-1;
            cout<<c<<endl;
    }
}
