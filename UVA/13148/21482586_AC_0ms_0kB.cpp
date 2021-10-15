#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[100000001];

int main()
{
    ll i,j,k,n,m,q;
    set<ll>vt;
    set<ll>::iterator it;
    for(i=1; i*i*i<=100000000; i++)
    {
        k = i*i*i;
        if(k<=100000000)
        {
            ll x = sqrt(k);
            if(x*x==k)
            {
                vt.insert(k);
            }
        }
    }
    while(cin>>n)
    {
        if(n==0)
            break;
        it = vt.lower_bound(n);
        if(it!=vt.end())
        {
            if(*it==n)
            {
                cout<<"Special"<<endl;
            }
            else
                cout<<"Ordinary"<<endl;
        }
        else
            cout<<"Ordinary"<<endl;
    }

}

