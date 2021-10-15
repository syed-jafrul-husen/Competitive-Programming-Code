#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll a[1000006];

int main()
{
    ll n,i,m,t,x,y;
    while(cin>>n)
    {
        for(i=0; i<=1000001; i++)
            a[i] = 0;
        for(i=0; i<n; i++)
        {
            cin>>t;
            a[t] = 1;
        }
        cin>>m;

        for(i=(m+1)/2; i>=0; i--)
        {
            if( a[i]==1 && a[m-i]==1 )
            {
                x = i;
                y = m-i;
                break;
            }
        }
        if(x>y)
            swap(x,y);
        cout<<"Peter should buy books whose prices are "<<x<<" and "<<y<<"."<<endl<<endl;
    }

}
