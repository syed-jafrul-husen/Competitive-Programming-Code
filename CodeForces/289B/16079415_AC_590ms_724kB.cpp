#include<bits/stdc++.h>
using namespace std;

int a[100000];

int main()
{
    int n,m,i,j,c=0,d,k=0;
    cin>>n>>m>>d;
    n = n*m;
    int b[n+2];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0; i<n; i++)
    {
        if(a[i]%d==a[0]%d )
        {

        }
        else
        {
            cout<<-1<<endl;
            return 0;
        }
    }
    for(i=0; i<n; i++)
    {
        c = 0;
        for(j=0; j<n; j++)
        {
            if(a[j]>a[i])
            {
                c = c + (a[j]-a[i])/d;
            }
            else
                c = c + (a[i]-a[j])/d;

        }
        b[k] = c;
        ++k;
        //cout<<c<<endl;
    }
    sort(b,b+k);
    cout<<b[0]<<endl;

}

