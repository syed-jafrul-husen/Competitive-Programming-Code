#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sc scanf
#define pf printf
#define lopi for(i=0; i<n; i++)

int main()
{
    ll n,m,i,j,c=0,d,e,k,t,f;
    string s;
    cin>>s;
    n = s.size();
    t = 0;
    for(i=0; i<n; i++)
    {
        if(t==0 && i==(n-1) && s[i]=='a')
            s[i] = s[i]+26;
        if(s[i]=='a' && t==1)
            break;
        if(s[i]=='a')
            continue;
        s[i] = s[i]-1;
        t = 1;
    }
    cout<<s<<endl;

}
