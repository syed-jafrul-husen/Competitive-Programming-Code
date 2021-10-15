#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct fun
{
    ll last,mul;
};
bool cmp(fun a, fun b)
{
    if(a.last>b.last)
        return true;
    else if(a.last==b.last && a.mul>=b.mul)
        return true;
    else
        return false;
}
int main()
{
    while(1)
    {
        ll t;
        cin>>t;
        if(t==0)
        {
            break;
        }
        vector<fun>v;
        while(t--)
        {

            ll l,w,h;
            cin>>l>>w>>h;
            v.push_back({h,l*w*h});
        }
        sort(v.begin(),v.end(),cmp);


        cout<<v[0].mul<<endl;
        v.clear();
    }
}
