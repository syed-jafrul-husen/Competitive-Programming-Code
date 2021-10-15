#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(ll k)
{
    if(k<2)
        return false;
    for(ll j=2; j*j<=k; j++)
        if(k%j==0)
            return false;
    return true;
}

int main()
{
    ll n,m,t,te=0,i,j,k,x,y;
    cin>>t;

    for(i=0; i<t; i++)
    {
        char ch;
        if(i<t-1)
        {
            cin>>x;
            cin>>ch;
        }
        else
            cin>>x;
        //cout<<x<<endl;
        k = powl(2,x) - 1;
        if(check(k) && check(x))
                cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

}

