#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,c=0,cnt=0,n,m,t,tc,u,v;
    string s,s2;
    cin>>s;
    n = s.size();
    s2 = "";
    c = 0;
    stack<char>st;

    for(i=0; i<n; i++)
    {
        if(s[i]=='B')
        {
            if(!st.empty())
            {
                st.pop();
            }
        }
        else
            st.push(s[i]);
    }
    s2 = "";
    while(!st.empty())
    {
        s2+=st.top();
        st.pop();
    }
    reverse(s2.begin(),s2.end());
    cout<<s2<<endl;


}
