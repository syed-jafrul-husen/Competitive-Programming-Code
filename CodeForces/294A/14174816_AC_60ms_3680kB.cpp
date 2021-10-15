#include<bits/stdc++.h>
using namespace std;

int a[100000];

int main()
{
    int n,i,j,m,x,y,b,c;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>m;
    for(i=0; i<m; i++)
    {
        cin>>b>>c;
        y = a[b-1]-c;
        x = a[b-1]-y-1;

        if(x>0)
        {
            if(b-1>0)
                a[b-2] = x+a[b-2];
        }
        if(y>0)
        {
            if(b<n)
                a[b] = y+a[b];
        }
        a[b-1] = 0;

    }
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<endl;
    }

    return 0;
}
