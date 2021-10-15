#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,k,i,c,d,x,cost;
    cin>>n>>k;
    cost = 2*((n-1)/k);
    if( (n-1)%k <= 2)
        cost = cost+(n-1)%k;
    else
        cost+=2;
    cout<<cost<<endl;
    for(i=2; i<=k+1; i++)
    {
        cout<<1<<" "<<i<<endl;
    }
    c = k+1;
    x = k;
    d = 2;
    while(1)
    {
        for(i=d; i<=k+1; i++)
        {
            if(c>=n)
                break;
            ++c;
            cout<<i<<" "<<c<<endl;
        }
        if(c>=n)
            break;
        d = k+2;
        k+=x;
    }
}
