#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ll n,i,j,k,q;
    string s;
    cin>>s;
    vector<int>vt[30];
    n = s.size();
    for(i=0; i<n; i++)
    {
        vt[s[i]-'a'].push_back(i+1);
    }
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        k = 0;
        for(i=0; i<26; i++)
        {
            vector<int>::iterator it;
            it = lower_bound(vt[i].begin(),vt[i].end(),l);
            if(it!=vt[i].end())
            {
                int x = it-vt[i].begin();
                x = vt[i][x];
                if(x>=l && x<=r)
                    ++k;
            }
        }
        if( k>=3 || l==r || s[l-1]!=s[r-1] )
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

}
