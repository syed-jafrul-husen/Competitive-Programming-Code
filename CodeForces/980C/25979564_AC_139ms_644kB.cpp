#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k,t,x;
    cin>>n>>k;
    int a[n+2],id[260];
    for(i=0; i<=256; i++)
        id[i] = -1;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(i=1; i<=n; i++)
    {
        if(id[a[i]]==-1)
        {
            t = a[i]-k+1;
            if(t<0)
                t = 0;
            //cout<<t<<" ";
            while(id[t]!=-1 && id[t]!=t)
                ++t;
            //cout<<t<<endl;
            for(j=t; j<=a[i]; j++)
                id[j] = t;
        }
    }
    for(i=1; i<=n; i++)
        cout<<id[a[i]]<<" ";

}
