#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n,a[1001],i,p;
    cin>>n;
    for(i=0; i<n; i++)cin>>a[i];
    p=0;
    sort(a+1,a+n);
    while (a[0]<=a[n-1])
    {
        a[0]++;
        a[n-1]--;
        sort(a+1,a+n);
        ++p;
    }
    cout<<p<<endl;
}
