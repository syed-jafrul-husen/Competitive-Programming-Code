#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sc scanf
#define pf printf
#define lopi for(i=0; i<n; i++)

ll arr[7];

int main()
{
    ll n,m,i,j,k,a,b,c,d,e,f=0,g,num=0,t=0,u=0,h,l;
    cin>>n>>a>>b>>c;
    d = 9999999999999,e = 9999999999999,l=9999999999999,h=9999999999999,f=9999999999999,g=9999999999999;
    if(n%4==0)
    {
        cout<<"0"<<endl;
        return 0;
    }

    t = n;
    u = 0;
    if((1+n)%4==0)
    {
        d = a;
    }
    else
    {
        for(i=0; i<5; i++)
        {
            t = t+1;
            u = u+a;
            if(t%4==0)
            {
                d = u;
                break;
            }

        }
    }

    t = n;
    u = 0;

    if((2+n)%4==0)
    {
        e = b;
    }
    else
    {
        for(i=0; i<5; i++)
        {
            t = t+2;
            u = u+b;
            if(t%4==0)
            {
                e = u;
                break;
            }

        }
    }
    t = n;
    u = 0;
    if((3+n)%4==0)
    {
        f = c;
    }
    else
    {
        for(i=0; i<5; i++)
        {
            t = t+3;
            u = u+c;
            if(t%4==0)
            {
                f = u;
                break;
            }

        }
    }
    t = n;
    u = 0;
    if((3+n)%4==0)
    {
        g = a+b;
    }
    else
    {
        for(i=0; i<5; i++)
        {
            t = t+3;
            u = u+a+b;
            if(t%4==0)
            {
                g = u;
                break;
            }

        }
    }
    t = n;
    u = 0;
    if((5+n)%4==0)
    {
        h = b+c;
    }
    else
    {
        for(i=0; i<8; i++)
        {
            t = t+5;
            u = u+b+c;
            if(t%4==0)
            {
                h = u;
                break;
            }

        }
    }
    arr[0] = d;
    arr[1] = e;
    arr[2] = f;
    arr[3] = g;
    arr[4] = h;
    //for(i=0; i<5; i++)
        //cout<<arr[i]<<endl;
    sort(arr,arr+5);
    cout<<arr[0]<<endl;
    //cout<<m<<endl;
}
