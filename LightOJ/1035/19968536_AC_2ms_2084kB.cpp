#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t,n,i,j,k,l,c,m;
    cin>>t;
    for(i=0; i<t; i++)
    {
        c = 0;
        cin>>n;
        int po[105] = {0};
        for(j=2; j<=n; j++)
        {
            m = j;
            for(k=2; k<=m; k++)
            {
                if(m%k==0)
                {
                    while(m%k==0)
                    {
                        ++po[k];
                        m/=k;
                    }
                }
            }
        }
        cout<<"Case "<<i+1<<": "<<n<<" = ";
        for(j=2; j<=100; j++)
        {
            if(po[j])
            {
                cout<<j<<" ("<<po[j]<<")";
                ++j;
                break;
            }
        }

        for(j=j; j<=100; j++)
        {
            if(po[j])
            {
                cout<<" * "<<j<<" ("<<po[j]<<")";
            }
        }
        cout<<endl;
    }
}
