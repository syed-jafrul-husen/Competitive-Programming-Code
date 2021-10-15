#include<bits/stdc++.h>
using namespace std;
vector<int>vt[100005];
int visited[30],has[30];
int white=0,grey=1,black=-1;
string ans="";
void dfs(int s)
{
    visited[s] = grey;
    int sz = vt[s].size();
    for(int i=0; i<sz; i++)
    {
        int        v=vt[s][i];
        if(visited[v]==white)
            dfs(v);
    }
    visited[s] = black;
    ans+='A'+s;
}

int main()
{
    string s,s2;
    cin>>s;
    while(1)
    {
        cin>>s2;
        if(s2=="#")
            break;
        int n,m,i,j;
        n = s.size();
        m = s2.size();
        for(int i=0; i<n && i<m; i++)
        {
            if(s[i]!=s2[i])
            {
                int u,v;
                u = s[i]-'A';
                v = s2[i]-'A';
                vt[u].push_back(v);
                has[s[i]-'A'] = 1;
                has[s2[i]-'A'] = 1;
                //cout<<s[i]<<" "<<s2[i]<<endl;
                break;
            }
        }


        s = s2;
    }
    for(int i=0; i<26; i++)
    {
        if(!visited[i] && has[i])
        {
            dfs(i);
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
}
