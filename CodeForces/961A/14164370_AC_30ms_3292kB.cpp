#include<bits/stdc++.h>
using namespace std;
int a[1005];
int main()
{
    int n,m,i,j,t;
    cin>>n>>m;
    for(i=0; i<m; i++)
    {
        cin>>t;
        ++a[t-1];
    }
    sort(a,a+n);

            cout<<a[0]<<endl;

   return 0;
}
