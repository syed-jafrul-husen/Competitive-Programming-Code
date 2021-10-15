#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[100005];
int main()
{
    ll n,m,i,j,b,c=2,c2=2;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=2; i<n; i++)
    {
        if((a[i-1]+a[i-2])==a[i])
        {
            ++c;
        }
        else
        {
            if(c>c2)
            {
                c2 = c;
            }
            c=2;
        }
    }
    if(c>c2)
    {
        c2 = c;
    }
    c=2;
    if(n==1)
        c2 = 1;
    cout<<c2<<endl;
}
