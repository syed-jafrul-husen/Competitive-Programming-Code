#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[30000];

int main()
{
    int n,i,j;
    cin>>n;
    vector<pair<string,string> >v;
    vector<pair<string,string> >::iterator it;

    vector<pair<string,string> >v2;
    vector<pair<string,string> >::iterator it2;

    vector<pair<string,string> >v3;
    vector<pair<string,string> >::iterator it3;

    vector<pair<string,string> >v4;
    vector<pair<string,string> >::iterator it4;
    string s,s2;
    for(i=0; i<n; i++)
    {
        cin>>s>>s2;
        if(s2=="rat")
        {
            v.push_back(make_pair(s,s2));
           // cout<<"rat"<<endl;
        }
        else if(s2=="woman" || s2=="child")
        {
            v2.push_back(make_pair(s,s2));
            //cout<<"WC"<<endl;
        }
        else if(s2=="man")
        {
            v3.push_back(make_pair(s,s2));
            //cout<<"man"<<endl;
        }
        else
        {
            v4.push_back(make_pair(s,s2));
            //cout<<"cap"<<endl;
        }
    }
    for(it=v.begin(); it!=v.end(); ++it)
    {
        cout<<it->first<<endl;
    }
    for(it2=v2.begin(); it2!=v2.end(); ++it2)
    {
        cout<<it2->first<<endl;
    }
    for(it3=v3.begin(); it3!=v3.end(); ++it3)
    {
        cout<<it3->first<<endl;
    }
    for(it4=v4.begin(); it4!=v4.end(); ++it4)
    {
        cout<<it4->first<<endl;
    }
    return 0;
}