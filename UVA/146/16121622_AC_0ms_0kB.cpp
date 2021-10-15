#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n,c,t;
    while(1)
    {
        cin>>s;
        n = s.size();
        t = 1;
        if(s=="#")
            break;
        vector<char>v;
        for(int i=0; i<n; i++)
            v.push_back(s[i]);
        while(next_permutation(v.begin(),v.end()))
        {
            t = 0;
            for(int i=0; i<v.size(); i++)
                cout<<v[i];
            cout<<endl;
            break;
        }
        if(t)
            cout<<"No Successor"<<endl;
    }
}
