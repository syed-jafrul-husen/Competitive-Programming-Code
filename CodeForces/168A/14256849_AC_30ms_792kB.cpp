#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[100005];
int main()
{
    ll n,m,i,j,x,y,cnt2=2,w;
    cin>>n>>x>>y;
    double ans;
    ans = (n*y)/100.0;
    ans = ans-x;
    ans = ans+0.99999999;

    stringstream stream;
    stream << fixed << setprecision(9) << ans;
    string s = stream.str();
    n = s.size();
    for(i=0; i<n; i++)
    {
        if(s[i]=='-')
        {
            cout<<"0"<<endl;
            break;
        }
        if(s[i]=='.')
            break;
        else
            cout<<s[i];
    }
}
