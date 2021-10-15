#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t,i,j,k,n,sz;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s>>n;
        ll a=0,b=0,cnt=0;
        sz = s.size();
        for(i=0; i<sz; i++)
        {
            if(s[i]=='a')
                ++a;
            else
                ++b;
            if(a>b)
                ++cnt;
        }
        --n;
        if(a==b)
            cnt = cnt*(n+1);
        else if(a>b)
        {
            while((a-b)<sz && n>0)
            {
                for(i=0; i<sz; i++)
                {
                    if(s[i]=='a')
                        ++a;
                    else
                        ++b;
                    if(a>b)
                        ++cnt;
                }
                --n;
            }
            if(n>0)
                cnt = cnt + sz*n;
        }
        else if(a<b)
        {
            while( (b-a)<sz && n>0 )
            {
                for(i=0; i<sz; i++)
                {
                    if(s[i]=='a')
                        ++a;
                    else
                        ++b;
                    if(a>b)
                        ++cnt;
                }
                --n;
            }
        }
        cout<<cnt<<endl;
    }
}

