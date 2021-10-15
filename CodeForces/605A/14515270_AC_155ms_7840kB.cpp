#include<bits/stdc++.h>
using namespace std;

int a[1000000],b[1000000];

int main()
{
    int n,i,j,c=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        //b[i] = a[i];
    }
    for(i=0; i<n; i++)
    {
        b[a[i]] = b[a[i]-1]+1;
    }
    sort(b,b+n+1);
    n = n-b[n];
    cout<<n<<endl;
    return 0;
}
