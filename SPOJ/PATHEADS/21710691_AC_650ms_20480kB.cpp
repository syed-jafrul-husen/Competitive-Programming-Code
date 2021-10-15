#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[1000006],b[1000006], c[10000007];
int main()
{
    ll i,j,n,cnt=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
        b[a[i]]++;
        cnt=max(cnt,a[i]);
    }
    for(i=1; i<=cnt; i++)
    {
        if(b[i])
        {
            for(j=1; j*i<=cnt; j++)
            {
                c[j*i]+=b[i];
            }
        }
    }
    for(i=1; i<=n; i++)
    {
        cout<<c[a[i]]-1<<endl;
    }
}
