#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,m,i,j,k,c=0,cnt=0,t,te=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(m%n==0)
            cout<<n<<" "<<m<<endl;
        else
            cout<<-1<<endl;
    }

}
