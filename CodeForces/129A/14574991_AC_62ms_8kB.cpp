#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,i,b=0,c=0,t;

    cin>>n;
    int a[n+2];
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
            ++b;
        else
            ++c;
    }
    if(c%2==0)
        cout<<b<<endl;
    else
        cout<<c<<endl;

    return 0;
}
