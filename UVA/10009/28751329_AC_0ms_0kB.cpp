#include<bits/stdc++.h>
using namespace std;

#define ll long long

vector<ll>vt[30];
ll vis[30],par[30];
string ans="";

void BFS(int s)
{
    int frnt,i,j,sz;
    vis[s] = 1;
    queue<int>q;
    q.push(s);

    while(!q.empty())
    {
        ll frnt = q.front();
        //cout<<frnt<<endl;
        q.pop();
        ll sz = vt[frnt].size();
        for(i=0; i<sz; i++)
        {
            if(vis[vt[frnt][i]]==0)
            {
                int v = vt[frnt][i];
                vis[v] = 1;
                par[v] = frnt;
                q.push(v);
            }
        }
    }
}

void path(int s,int d)
{
    if(s==d)
    {
        ans+=(s+'A');
        return;
    }
    else
        path(s,par[d]);
    ans+=(d+'A');
}

int main()
{
    ll n,m,i,j,k,t;
    cin>>t;

    for(i=1; i<=t; i++)
    {
        for(j=0; j<30; j++)
            vt[j].clear();
        string s,s2;
        cin>>n>>m;
        for(j=0; j<n; j++)
        {
            cin>>s>>s2;
            vt[(int)(s[0]-'A')].push_back((int)(s2[0]-'A'));
            vt[(int)(s2[0]-'A')].push_back((int)(s[0]-'A'));
        }
        for(j=0; j<m; j++)
        {
            cin>>s>>s2;

            for(k=0; k<30; k++)
            {
                vis[k] = 0;
                par[k] = 0;
            }
            ans = "";
            BFS((int)(s[0]-'A'));
            path((int)(s[0]-'A'),(int)(s2[0]-'A'));
            cout<<ans<<endl;
        }
        if(i<t)
            cout<<endl;
    }

}
