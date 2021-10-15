#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll a,b,c,d,i,j,k,s1,s2,d1,d2;
    while(1)
    {
        cin>>s1>>s2>>d1>>d2;
        if(!s1 && !s2 && !d1 && !d2)
            break;
        if(s1>d1)
        {
            swap(s1,d1);
            swap(s2,d2);
        }
        if( abs(s1-d1)<=1 && abs(s2-d2)>=1 )
        {
            cout<<abs(s1-d1)+abs(s2-d2)<<endl;
            continue;
        }
        else if( abs(s2-d2)>=abs(s1-d1) )
        {
            cout<<abs(s1-d1)+abs(s2-d2)<<endl;
            continue;
        }
        if(s1%2==s2%2)
        {
            a = ((d1-s1)/2)*4;
            if(s1%2!=d1%2)
                ++a;
            if(s1%2!=d1%2 && s2%2!=d2%2)
                ++a;
            else if(s2%2!=d2%2)
                --a;
            cout<<a<<endl;
        }
        else
        {
            a = ((d1+1-s1)/2)*4;
            if(s1%2!=d1%2)
                --a;
            if(s1%2!=d1%2 && s2%2!=d2%2)
                --a;
            else if(s2%2!=d2%2)
                ++a;
            cout<<a<<endl;
        }

    }
}
