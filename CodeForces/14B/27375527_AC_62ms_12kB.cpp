#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll x0,n,a,b,L=0,R=999999,i;
    cin>>n>>x0;
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        if(a>b)
            swap(a,b);
        L = max(L,a);
        R = min(R,b);
    }
    if(L>R)
        cout<<-1<<endl;
    else if(x0>=L && x0<=R)
        cout<<0<<endl;
    else
        cout<<min( abs(L-x0),abs(R-x0) )<<endl;
    return 0;
}


