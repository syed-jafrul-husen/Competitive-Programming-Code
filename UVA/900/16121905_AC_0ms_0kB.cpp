#include<bits/stdc++.h>
using namespace std;

int a[100],n,i;
int main()
{
    a[0] = 1;
    a[1] = 1;
    for(i=2; i<=50; i++)
        a[i] = a[i-1]+a[i-2];
    while(1)
    {
        cin>>n;
       if(n==0) break;
       cout<<a[n]<<endl;
    }
}
