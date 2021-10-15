#include <bits/stdc++.h>

using namespace std;

#define ll long long


int main()
{
    ll t,n,m,i,j,k;
    cin>>t;
    for(k=1; k<=t; k++)
    {
        cin>>n;
        ll a[n+2];
        for(j=0; j<n; j++)
            cin>>a[j];

        sort(a,a+n);

        //for(j=0; j<n; j++)
          //  cout<<a[j]<<" ";
        //cout<<endl;

        ll c = 0;
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n-1; j++)
            {
                ll item = a[i]+a[j]-1;
                ll indx = upper_bound(a,a+n,item)-a;
                //cout<<a[i]<<" "<<a[j]<<endl;
                //cout<<item<<" "<<indx<<endl;

                if(indx-j-1>0)
                {
                    c = c+(indx-j-1);
                }
                //cout<<indx-j-1<<endl<<endl;
            }
            //cout<<endl<<endl;
        }
        printf("Case %lld: %lld\n",k,c);
    }
}
