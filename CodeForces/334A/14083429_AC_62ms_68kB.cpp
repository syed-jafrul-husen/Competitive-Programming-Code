#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll n,i,j,k,m;
    cin>>n;
    m = n*n;
    ll a[m];
    for(i=0; i<m; i++)
    {
        a[i] = i+1;
    }
    j = m-1;
    for(i=0; i<m/2; i=i)
    {
        for(k=0; k<(n)/2; k++)
        {
            cout<<a[i]<<" ";
            ++i;
            cout<<a[j]<<" ";
            --j;
        }
        cout<<endl;
    }
}
