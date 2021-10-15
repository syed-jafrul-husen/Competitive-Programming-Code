#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,tc,i,j,k,n;
    cin>>t;
    for(tc=1; tc<=t; tc++)
    {
        cin>>n;
        map<ll,ll>mp;
        string s="";
        ll cur = 0,f=0,x;
        for(i=0; i<n; i++)
        {
            cin>>x;
            ++mp[x];
            if(x>n)
                f = 1;
        }
        for(i=0; i<n; i++)
        {
            if(cur==0)
            {
                if(mp[cur+1])
                {
                    cur++;
                    mp[cur]--;
                    s+='(';
                }
                else
                    f = 1;
            }
            else
            {
                if(mp[cur+1])
                {
                    ++cur;
                    mp[cur]--;
                    s+='(';
                }
                else if(mp[cur-1])
                {
                    --cur;
                    mp[cur]--;
                    s+=')';
                }
                else
                    f = 1;
            }

        }
        if(cur)
            f = 1;
        if(f)
            printf("Case %lld: invalid\n",tc);
        else
        {
            printf("Case %lld: ",tc);
            cout<<s<<endl;
        }


    }
}