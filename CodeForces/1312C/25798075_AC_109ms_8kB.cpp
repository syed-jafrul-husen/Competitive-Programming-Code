#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t,i,j;
    cin>>t;
    while(t--)
    {
        ll n,k,b[200]= {0},y=0,x;
        cin>>n>>k;
        for(i=0; i<n; i++)
        {
            cin>>x;
            j=0;
            while(x>0)
            {
                b[j]+=x%k;
                //cout<<a<<" "<<b[a]<<" ";
                if(b[j]>1)
                {
                    y++;
                    break;
                }
                x/=k;
                //cout<<x<<endl;
                j++;
            }
        }
        if(y>0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
