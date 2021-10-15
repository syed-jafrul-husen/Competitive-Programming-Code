#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k,s,e;
    cin>>n;
    s = 1;
    e = n;
    k = sqrt(n);
    for(i=n; i>0; i-=k)
    {
        for(j=max(1,i-k+1); j<=i; j++)
            cout<<j<<" ";
    }
}
