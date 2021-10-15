#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,k,sz,i,j,c=0;
    string s;
    cin>>n>>s;
    sz = s.size();
    c = 1;
    while(n>0)
    {
        c*=n;
        n-=sz;
        //ut<<c<<endl;
    }
    cout<<c<<endl;
}
