#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll a[100002];

int main()
{
    ll b,c=0,d=0,e,i,j=1,k,n,m,cnt;
    cin>>n>>k;
    c = 1000000000000000000;
    for(i=0; i<k; i++)
    {
        cin>>a[i];
        b = n%a[i];
        if(b<c)
        {
            c = b;
            d = n/a[i];
            j = i+1;
        }

    }
    d = min(d,n);
    cout<<j<<" "<<d<<endl;


}

