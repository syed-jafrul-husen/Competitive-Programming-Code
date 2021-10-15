#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int i,j,k,n,c=0,p,q,t;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n>>p>>q;
        int a[n+2],cnt=0,x=0;
        c = 0;
        for(j=0; j<n; j++)
            {
                cin>>a[j];
            }
            sort(a,a+n);
            for(j=0; j<n; j++)
            {
                ++c;
                x+=a[j];
                if(c<=p && x<=q)
                {
                    ++cnt;
                }
            }
            cout<<"Case "<<i+1<<": "<<cnt<<endl;
    }
}
