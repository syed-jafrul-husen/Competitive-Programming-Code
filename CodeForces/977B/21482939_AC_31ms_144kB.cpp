#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k;
    string s,s2;
    cin>>n;
    cin>>s;
    map<string,int>mp;
    map<string,int>::iterator it;
    for(i=1; i<n; i++)
    {
        s2="";
        s2+=s[i-1];
        s2+=s[i];
        ++mp[s2];
    }
    int mx = 0;
    for(it=mp.begin(); it!=mp.end(); it++)
    {
        if(it->second>mx)
        {
            mx = it->second;
            s2 = it->first;
        }
    }
    cout<<s2<<endl;
}
