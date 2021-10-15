#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,i,j,k,c=0,c2=0,t;
    ll a[20];
    cin>>t;
    cout<<"Lumberjacks:"<<endl;
    for(j=1; j<=t; j++)
    {
        c = 0;
        c2 = 0;
        for(i=0; i<10; i++)
            {
                cin>>a[i];
            }
            for(i=0; i<10-1; i++)
            {
                if(a[i]<=a[i+1])
                    ++c;
                else if(a[i]>=a[i+1])
                    ++c2;
            }
            if(c==9 || c2==9)
            {
                cout<<"Ordered"<<endl;
            }
            else
                cout<<"Unordered"<<endl;
            
    }


}
