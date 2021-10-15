#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,k,l,c=1,t=0;
    cin>>n>>m>>k;
    for(i=1; i<=n; i++)
    {
        if(i%2==1)
        {
            for(j=1; j<=m; j++)
            {
                ++t;

                if(c==k)
                {
                    cout<<n*m-((k-1)*2)<<" ";
                    cout<<i<<" "<<j<<" ";
                    ++c;
                }
                else if(c>=k)
                {
                    cout<<i<<" "<<j<<" ";
                }
                else if(t==1)
                    cout<<2<<" "<<i<<" "<<j<<" ";
                else
                {
                    cout<<i<<" "<<j<<endl;
                    t = 0;
                    ++c;
                }
            }
        }
        else
        {
           for(j=m; j>0; j--)
            {
                ++t;

                if(c==k)
                {
                    cout<<n*m-((k-1)*2)<<" ";
                    cout<<i<<" "<<j<<" ";
                    ++c;
                }
                else if(c>=k)
                {
                    cout<<i<<" "<<j<<" ";
                }
                else if(t==1)
                    cout<<2<<" "<<i<<" "<<j<<" ";
                else
                {
                    cout<<i<<" "<<j<<endl;
                    t = 0;
                    ++c;
                }
            }
        }
    }
}
