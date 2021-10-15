#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    map<string,ll>mp;
    map<string,ll>::iterator it;
    map<string,ll>mp2;
    ll n,i,j,c,mx=-999999;
    cin>>n;
    c = n+2;
    ll k[n+2];
    string s[n+2],ans;
    for(i=0; i<n; i++)
    {
        cin>>s[i]>>k[i];
        mp[s[i]]+=k[i];
    }
    for(it=mp.begin(); it!=mp.end(); it++)
        mx = max(it->second,mx);
    //cout<<mx<<endl;
    map<string,ll>mp3;
    for(i=0; i<n; i++)
    {
        mp3[s[i]]+=k[i];
        if(mp3[s[i]]>=mx && mp2[s[i]]==0)
            mp2[s[i]] = i+1;
    }
    for(it=mp.begin(); it!=mp.end(); it++)
    {
        //cout<<it->first<<" "<<it->second<<" "<<mp2[it->first]<<endl;
        if(it->second==mx && mp2[it->first]<c)
        {
            ans = it->first;
            c = mp2[it->first];
        }
    }
    cout<<ans<<endl;

}
