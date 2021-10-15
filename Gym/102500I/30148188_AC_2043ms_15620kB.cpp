#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,m,t,i,j,k;
    cin>>n;
    ll a[n+2],a2[n+2];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        a2[i] = a[i];
    }
    sort(a2,a2+n);
    ll f = 0,c=0;
    for(i=0; i<n-1; i++)
    {
        if(a[i]>a[i+1] && f==0 && c==0)
            f = 1;
        else if(f==1 && a[i]<a[i+1])
            c = 1;
        if(c==1 && f==1 && a[i]>a[i+1] )
            f = 2;
    }
    if(f==2)
        cout<<"impossible"<<endl;
    else
    {
        if(f==0)
            cout<<"1 1"<<endl;
        else
        {
            ll l=-1,r=-1;
            for(i=0; i<n; i++)
            {
                if(a[i]!=a2[i])
                {
                    if(l==-1)
                    {
                        l = i;
                        r = i;
                    }
                    else
                        r = i;
                }
            }
            for(i=l,j=r; i<j; i++,j--)
            {
                swap(a[i],a[j]);
            }
            for(i=0; i<n; i++)
            {
                if(a[i]!=a2[i])
                {
                    cout<<"impossible"<<endl;
                    return 0;
                }
            }
            cout<<l+1<<" "<<r+1<<endl;
        }

    }
}

