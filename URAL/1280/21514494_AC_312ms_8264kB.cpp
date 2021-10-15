#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll a[1000+2][1000+2],b[1000+2];

int main()
{
    ll n,e,u,v,k,i,j;
    cin>>n>>e;

    for(ll i=0; i<e; i++)
    {
        cin>>u>>v;
        a[v][u]=1;
    }
    for(i=1; i<=n; i++)
    {
        cin>>b[i];
    }
    ll t = 0;
    for(i=1; i<=n; i++)
    {
        k = b[i];
        for(j=1; j<=n; j++)
        {
            if(a[k][j]==1)
            {
                t = 1;
            }
        }
        for(j=1; j<=n; j++)
        {
            a[j][k] = 0;
        }
    }
    if(t==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

}
