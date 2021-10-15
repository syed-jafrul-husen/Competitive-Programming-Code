#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,k,c=0,t=0;
    cin>>n>>m;
    int a[n+2],b[n+2];
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<n; i++)
        cin>>b[i];
    for( ; ; )
    {
        if(m<0)
            break;
        for(i=0; i<n; i++)
        {
            b[i] = b[i] - a[i];
            if(b[i]<0)
            {
                m = m+b[i];
                b[i] =0;
            }
            if(m<0)
                t = 1;
        }
        if(t)
            break;
        ++c;
    }
    cout<<c<<endl;
}
