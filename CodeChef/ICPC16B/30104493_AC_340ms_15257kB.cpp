#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,m,t,i,j,k,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        map<ll,ll>mp;
        map<ll,ll>::iterator it;

        vector<ll>vt;


        while(n--)
        {
            cin>>k;
            ++mp[k];
        }

        for(it=mp.begin(); it!=mp.end(); it++)
            {
                vt.push_back(it->first);
            }
        ll f = 1;
        c = 0;
        n = vt.size();
        if(n<50)
        {
            for(j=0; j<n; j++)
            {
                for(i=0; i<n; i++)
                {
                    if(vt[i]==vt[j] && mp[vt[j]]<=1)
                        continue;
                    if( (mp[(vt[j] * vt[i])]) ==0)
                        f = 0;
                    ++c;
                    //cout<<c<<endl;
                }
            }
        }
        else
            f = 0;

        if(f)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}

