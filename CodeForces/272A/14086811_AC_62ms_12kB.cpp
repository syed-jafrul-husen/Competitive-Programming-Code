#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c=0,n,i,j;
    int s = 0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        s = s+a[i];
    }
    int m = n+1;
    for(i=1; i<=5; i++)
    {
        s = s+i;
        if(s%m!=1)
            ++c;
        s= s-i;
    }
    cout<<c<<endl;

}

