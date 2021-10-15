#include<bits/stdc++.h>
using namespace std;

int a[30];

int main()
{
    int n,k,i,j,m;
    string s;
    cin>>s;
    cin>>k;
    map<char,int>mp;
    map<char,int>::iterator it;
    n = s.size();
    for(i=0; i<n; i++)
    {
        ++mp[s[i]];
    }
    multimap<int,char>mp2;
    multimap<int,char>::iterator it2;

    for(it=mp.begin(); it!=mp.end(); it++)
    {
        mp2.insert(pair<int,char>(it->second,it->first) );
        //cout<<it->first<<" "<<it->second<<endl;
    }
    //cout<<endl;
    map<char,int>mp3;
    for(it2=mp2.begin(); it2!=mp2.end(); it2++)
    {
        if(k-it2->first>=0)
        {
            mp3[it2->second] = 1;
            k-=it2->first;
        }
        //cout<<it2->first<<" "<<it2->second<<endl;
    }
    string s2 = "";
    for(i=0; i<n; i++)
    {
        if(mp3[s[i]]==0)
        {
            s2+=s[i];
        }
    }
    mp3.clear();
    n = s2.size();
    for(i=0; i<n; i++)
    {
        ++mp3[s2[i]];
    }
    cout<<mp3.size()<<endl;
    cout<<s2<<endl;
}
