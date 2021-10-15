#include<bits/stdc++.h>
using namespace std;
#define ll long long
//ll a[100000000];
int main()
{
    ll a,b,c,x,i,y,z,d,e,f,t=0;
    cin>>a>>b>>c>>x>>y>>z;
    ll arr[5];
    arr[0] = a-x;
    arr[1] = b-y;
    arr[2] = c-z;
    sort(arr,arr+3);
    for(i=0; i<3; i++)
    {
        if(arr[i]<0)
            arr[i] = arr[i]*2;
    }
    for(i=0; i<3; i++)
    {
        if(arr[i]>0 && arr[i]%2==1)
            --arr[i];
    }
    for(i=0; i<3; i++)
    {
        t = arr[i]+t;
    }
    if(t>=0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

   return 0;
}
