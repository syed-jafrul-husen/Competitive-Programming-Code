#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,i,j,k,c,x,y,m;
    cin>>n;

    for(i=0; i<n; i++)
    {
        string s,s2="";
        cin>>s;
        m = s.size();
        for(j=m-1; j>=0; j--)
            s2+=s[j];
        if(s==s2)
            printf("Case %lld: Yes\n",i+1);
        else
            printf("Case %lld: No\n",i+1);
    }
}
