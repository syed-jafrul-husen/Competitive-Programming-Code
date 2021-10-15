#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,k,c,m,n,l;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n>>m;
        for(k=0; k<m; k++)
        {
            c = 0;
            for(l=0; l<n; l++)
            {
                ++c;
                for(j=0; j<c; j++)
                    cout<<c;
                    cout<<endl;
            }
            for(l=0; l<n; l++)
            {
                --c;
                for(j=0; j<c; j++)
                    cout<<c;
                if(k==m-1 && i==t-1 && l==n-1);
                    //cout<<k<<" "<<m-1<<" "<<i<<" "<<t-1<<" "<<l<<" "<<n-1<<endl;
                else
                    cout<<endl;
            }

        }
    }
}
