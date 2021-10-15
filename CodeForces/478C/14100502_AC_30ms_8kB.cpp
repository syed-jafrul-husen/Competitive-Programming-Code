#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sc scanf
#define pf printf
#define lopi for(i=0; i<n; i++)


int main()
{
    ll arr[4],a,b,c,d,e,f;

    for(int i=0; i<3; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+3);
    a = arr[0];
    b = arr[1];
    c = arr[2];
    if(a==b && a==c)
        cout<<c<<endl;
    else if( (a+b)==c )
    {
        c = a+b+c;
        c = c/3;
        cout<<c<<endl;
    }
    else if( ((a+b)*2)<=c )
        cout<<a+b;
    else if( (a+b)<c )
    {
        c = (a+b+c)/3;
        cout<<c<<endl;
    }
    else if(a+b>c)
    {
        c = a+b+c;
        c = c/3;
        cout<<c<<endl;
    }

    return 0;
}
