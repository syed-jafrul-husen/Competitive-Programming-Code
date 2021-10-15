#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,t,a,b,res;
    cin>>t;
    while(t--)
    {
        res = 0;
        cin>>a>>b;
        if(a==b)
            cout<<0<<"\n";
        else if(a==0 && b==1)
            cout<<1<<"\n";
        else if(b==0 || b==1)
            cout<<-1<<"\n";
        else
        {
            ll x,y;
            x = __builtin_popcountll(a);
            y = __builtin_popcountll(b-1);//count  number of 1's in binary
            //cout<<x<<" "<<y<<endl;
            if(x<=y)
                cout<<y-x+1<<"\n";
            else
                cout<<2<<"\n";
        }

    }
}

