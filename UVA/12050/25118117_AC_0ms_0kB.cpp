#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll digit;
vector<ll>vt;

ll Digit(ll n)
{
    ll sz = vt.size(),i,j=0;
    for(i=0; i<sz; i++)
    {
        if(n<=vt[i])
            return i;
    }
    return sz-1;
}

int main()
{
    ll n,i,j,k,l,sz;
    n = 9;
    vt.push_back(n);
    vt.push_back(n+vt[0]);
    i = 1;
    while(n<=20000000000)
    {
        n*=10;
        vt.push_back(n+vt[i]);
        ++i;
        vt.push_back(n+vt[i]);
        ++i;
    }
//    sz = vt.size();
//    for(i=0; i<sz; i++)
//    {
//        cout<<vt[i]<<" ";
//    }
//    cout<<endl<<endl;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        if(n<=9)
        {
            cout<<n<<endl;
            continue;
        }
        ll digit = Digit(n);
        //cout<<digit<<endl;
        ll c = (digit+1)/2;
        ll sm = 9;
        while(c-- && c>0)
        {
            sm = (sm*10)+9;
        }
        //cout<<sm<<endl;
        n-=sm;
        cout<<n;
        if(digit%2==0)
            n/=10;
        while(n>0)
        {
            cout<<(n%10);
            n/=10;
        }
        cout<<endl;
    }
}
