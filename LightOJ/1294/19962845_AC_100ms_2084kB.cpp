#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,i,j,c=0,t,sm=0;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n>>m;
        n = (n/2)*m;
        cout<<"Case "<<i<<": "<<n<<endl;
    }
}
