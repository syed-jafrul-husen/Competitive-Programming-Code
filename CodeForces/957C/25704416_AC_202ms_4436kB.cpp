#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,i,j,k,u;
    double mx=-1,x;
    cin>>n>>u;
    vector<ll>vt(n,0);

    for(i=0; i<n; i++)
        cin>>vt[i];
    for(i=0; i<n-2; i++)
    {
        k = lower_bound(vt.begin(),vt.end(),vt[i]+u)-vt.begin();
        j = i+1;
        if(k==n)
            --k;
        else if(vt[k]-vt[i]>u)
            --k;
        if(k>j && k<n)
        {
            if( vt[k]-vt[i]<=u || k<n )
            {
                x = (vt[k]-vt[j])/((vt[k]-vt[i])*1.0) ;
              //  cout<<i<<" "<<j<<" "<<k<<endl;
                mx = max(mx,x);
            }
        }
    }
    cout.precision(10),cout<<fixed<<mx<<endl;
    //cout<<mx<<endl;

}
