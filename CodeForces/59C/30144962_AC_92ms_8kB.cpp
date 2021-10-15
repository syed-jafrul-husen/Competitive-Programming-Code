#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,i,j,k,c=0,c2;
    cin>>k;
    string s;
    cin>>s;
    ll a[29]= {0};
    n = s.size();
    for(i=0; i<n; i++)
    {
        if( (s[i]-'a')>=k && s[i]!='?')
            c = 1;
        a[s[i]-'a'] = 1;
    }
    if(c==1)
        cout<<"IMPOSSIBLE"<<endl;
    else
    {
        if(n%2==1 && n>1)
        {
            if(s[n/2]=='?')
            {
                ll tt = 0;
                for(j=k-1; j>=0; j--)
                {
                    if(a[j]==0)
                    {
                        tt = 1;
                        s[n/2] = 'a'+j;

                        a[j] = 1;
                        break;
                    }
                }
                if(tt==0)
                {
                    s[n/2] = 'a';
                }
            }
        }
        for(i=(n/2)-1; i>=0; i--)
        {
            if(s[i]=='?' && s[n-i-1]=='?')
            {
                ll tt = 0;
                for(j=k-1; j>=0; j--)
                {
                    if(a[j]==0)
                    {
                        tt = 1;
                        s[i] = 'a'+j;
                        s[n-i-1] = 'a'+j;
                        a[j] = 1;
                        break;
                    }
                }
                if(tt==0)
                {
                    s[i] = 'a';
                    s[n-i-1] = 'a';
                }
            }
            else if(s[i]=='?')
            {
                s[i] = s[n-i-1];
            }
            else if(s[n-i-1]=='?')
            {
                s[n-i-1] = s[i];
            }
        }
        for(i=0; i<n; i++)
        {
            if(s[i]=='?')
                s[i] = 'a';
        }
        for(i=0; i<26; i++)
            a[i] = 0;
        c = 0;
        for(i=0; i<n; i++)
        {
            if(s[i]!=s[n-i-1])
                c = 1;
            a[s[i]-'a'] = 1;
        }
        for(i=0; i<k; i++)
        {
            if(a[i]==0)
                c = 1;
        }
        if(c==1)
            cout<<"IMPOSSIBLE"<<endl;
        else
            cout<<s<<endl;
    }
}
