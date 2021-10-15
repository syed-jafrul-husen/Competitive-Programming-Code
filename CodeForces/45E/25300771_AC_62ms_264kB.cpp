#include<bits/stdc++.h>
using namespace std;
string a[105],b[105];
int x[200],y[200],vis[105];
int main()
{
    int n,i,j,k;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        x[a[i][0]]++;
    }

    for(i=0; i<n; i++)
    {
        cin>>b[i];
        y[b[i][0]]++;
    }
    sort(a,a+n);
    sort(b,b+n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(vis[j]==0 &&  (a[i][0]==b[j][0] || (x[a[i][0]]>y[a[i][0]] && y[b[j][0]]>x[b[j][0]]) ) )
            {
                --x[a[i][0]];
                --y[b[j][0]];
                vis[j] = 1;
                if(i)
                    cout<<", ";
                cout<<a[i]<<" "<<b[j];
                break;
            }
        }
    }
}
