#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,i,j,k,c,sm=0,a,b;
    cin>>n;
    c = n-1;
    a = 1;
    b = n;
    for(i=1; i<=c; i++)
    {
        //cout<<a<<" "<<b<<" "<<endl;
        sm = (a+b)%(n+1)+sm;
        if(i%2==1)
            ++a;
        else
            --b;
    }
    cout<<sm<<endl;
}
