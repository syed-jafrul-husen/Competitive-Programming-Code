#include<iostream>
using namespace std;

#define ll long long

int main()
{
    ll n,a,b,c,cnt=0,i,j,k;

    cin>>n;
    for(c=1; c<=n; c++)
    {
        for(b=1; b<=c; b++)
        {
            a = c^b;
            if(a+b>c && a>=1 && a<=b)
                ++cnt;
        }
    }
    cout<<cnt<<endl;
}
