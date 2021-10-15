#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ll t,n,i,m,a,b,c=0,j;
    cin>>t;
    for(i=0; i<t; i++)
    {
        c = 0;
        cin>>n>>m;
        for(j=0; j<3; j++)
        {
            if(n!=m && n%3!=1)
            {
                ++n;
                ++c;
            }
            else
                break;
        }
        //cout<<n<<" "<<c<<endl;
        for(j=0; j<3; j++)
        {
            if(n!=m && m%3!=1)
            {
                --m;
                ++c;
            }
            else if(n==m && m%3!=1)
            {
                ++c;
                break;
            }
            else
                break;
        }
        //cout<<m<<" "<<c<<endl;
        n = m-n;
        c = c+((n/3)*2);
        cout<<"Case "<<i+1<<": "<<c<<endl;
    }
    return 0;
}
