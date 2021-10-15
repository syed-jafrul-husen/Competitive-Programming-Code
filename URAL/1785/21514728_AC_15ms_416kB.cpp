#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll a[1000+2][1000+2],b[1000+2];

int main()
{
    ll n,m,t,i,j,k,x,ans;
    cin>>n;
    if(n<=4)
        cout<<"few"<<endl;
    else if(n<=9)
        cout<<"several"<<endl;
    else if(n<=19)
        cout<<"pack"<<endl;
    else if(n<=49)
        cout<<"lots"<<endl;
    else if(n<=99)
        cout<<"horde"<<endl;
    else if(n<=249)
        cout<<"throng"<<endl;
    else if(n<=499)
        cout<<"swarm"<<endl;
    else if(n<=999)
        cout<<"zounds"<<endl;
    else
        cout<<"legion"<<endl;

}
