#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll n,i,j,k,c=0;
    cin>>n;
    ll t = n;
    while(t--)
    {
        cin>>k;
        if(k==0)
            ++c;
    }
    if( (n==1 && c==0) || (c==1 && n>1) )
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}


