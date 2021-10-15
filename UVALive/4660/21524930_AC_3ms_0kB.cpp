#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,t,te=0,i,j,k,x,y;
    cin>>t;
    while(t--)
    {
        ll mn = 999999999,bas=0,bas2=0;
        string s,s2;
        cin>>s>>s2;

        n = s.size();
        m = s2.size();
        for(i=0; i<n; i++)
        {
            if(s[i]-'0'>bas)
                bas = s[i]-'0';
        }

        for(i=0; i<m; i++)
        {
            if(s2[i]-'0'>bas2)
                bas2 = s2[i]-'0';
        }
        x = 0,y=0;
        --n;--m;
        //cout<<bas<<" "<<bas2<<endl;
        ll sz = n;
        for(i=0; i<=sz; i++)
        {
            k = (s[i]-'0')*(powl(bas+1,n));
            --n;
            x+=k;
        }
        sz = m;
        for(i=0; i<=sz; i++)
        {
            k = (s2[i]-'0')*(powl(bas2+1,m));
            --m;
            y+=k;
        }
        //cout<<x<<" "<<y<<endl;
        cout<<x+y<<endl;
    }

}
