#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,k,sz,i,j,c=0;

    cin>>n;

    if(n<=0)
    {
        n = abs(n);
        n = (n*(n+1) )/2;
        n*=(-1);
        n+=1;
    }
    else
        n = (n*(n+1) )/2;
    cout<<n<<endl;
}
