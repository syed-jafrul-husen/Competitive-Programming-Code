#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isLeapYear(ll year)
{
    if (year % 400 == 0)
        return true;
    else if(year % 100 == 0)
        return false;
    else if(year % 4 == 0)
        return true;
    else
        return false;
}


int main()
{
    ll t,d,m,y,y2,ans;
    cin>>t;
    for(ll tc=1; tc<=t; tc++)
    {
        cin>>d>>m>>y>>y2;

        ans = 0;
        if(m==2 && d==29)
        {
            ++y;
            for(ll i=y; i<=y2; i++)
            if(isLeapYear(i))
                ++ans;
        }
        else
            ans = y2-y;
        printf("Case %lld: %lld\n",tc,ans);
    }
}