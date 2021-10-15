#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[30000];



int main()
{
    ll n,i,j,k;
    cin>>n;
    if(n<=2)
        cout<<"-1"<<endl;
    else
    {
        for(i=n; i>=1; i--)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
