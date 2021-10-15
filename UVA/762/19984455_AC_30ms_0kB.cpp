#include<bits/stdc++.h>
using namespace std;
int c;
vector<int>vt[500005];
int visited[500005];
int par[500005],level[500005];
vector<int>ans;

void bfs(int s)
{
    int frnt,i,sz;
    queue<int>q;
    q.push(s);
    level[s] = 0;
    visited[s] = true;
    while(!q.empty())
    {
        frnt = q.front();
        q.pop();
        sz = vt[frnt].size();
        for(i=0; i<sz; i++)
        {
            if(!visited[vt[frnt][i]])
            {
                level[vt[frnt][i]] = level[frnt]+1;
                q.push(vt[frnt][i]);
                visited[vt[frnt][i]] = true;
                par[vt[frnt][i]] = frnt;
            }
        }
    }
}
void path(int s,int d)
{
    if(s==d)
    {
        ans.push_back(s);

        return;
    }
    else
    {
        path(s,par[d]);
    }
    ans.push_back(d);

}

int main()
{
    int t,i,j,k,l,n;
    int cnt=0;
    while(cin>>n)
    {
        ++cnt;
        if(cnt>1)
            cout<<endl;
        int m,u,v;

        map<string,int>mp;
        map<int,string>mp2;
        string s,s2;
        int c = 0;
        for(j=0; j<n; j++)
        {
            cin>>s>>s2;
            if(mp[s]==0)
            {
                ++c;
                mp[s] = c;
                mp2[c] = s;
            }
            if(mp[s2]==0)
            {
                ++c;
                mp[s2] = c;
                mp2[c] = s2;
            }
            vt[mp[s]].push_back(mp[s2]);
            vt[mp[s2]].push_back(mp[s]);
        }
        cin>>s>>s2;
        if(mp[s]==0)
        {
            ++c;
            mp[s] = c;
            mp2[c] = s;
        }
        if(mp[s2]==0)
        {
            ++c;
            mp[s2] = c;
            mp2[c] = s2;
        }

        bfs(mp[s]);
        if(!visited[mp[s2]])
        {
            cout<<"No route"<<endl;
        }
        else
        {
            path(mp[s],mp[s2]);
            int sz = ans.size();
            if(sz==1)
                cout<<mp2[ans[0]]<<" "<<mp2[ans[0]];
            for(j=0; j<sz-1; j++)
            {
                 cout<<mp2[ans[j]]<<" "<<mp2[ans[j+1]]<<endl;
            }
        }
        ans.clear();
        for(j=0; j<=500005; j++)
            visited[j] = 0;

        for(j=1; j<=c; j++)
            vt[j].clear();
        getchar();
    }
}
