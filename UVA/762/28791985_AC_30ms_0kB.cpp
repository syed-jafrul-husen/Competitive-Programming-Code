#include<bits/stdc++.h>
using namespace std;

#define ll long long

vector<ll>vt[100005];
ll vis[100005],par[100005];
map<string,ll>mp;
map<ll,string>mp2;
vector<ll>ans;

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
        ans.push_back(s);
        return;
    }
    else
        path(s,par[d]);
    ans.push_back(d);
}

int main()
{
    ll n,m,i,j,k,t,tc=0;
    while( cin>>n )
    {
        ll c = 0;
        ++tc;
        for(j=0; j<100005; j++)
            vt[j].clear();
        mp.clear();
        mp2.clear();
        string s,s2;
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
        if(tc>1)
            cout<<endl;
        for(k=0; k<100005; k++)
        {
            vis[k] = 0;
            par[k] = 0;
        }
        ans.clear();


        //cout<<mp[s2]<<endl;
        if(mp[s2]==0 || mp[s]==0)
            cout<<"No route"<<endl;
        else
        {
            BFS(mp[s]);
            if(vis[mp[s2]]==0)
                cout<<"No route"<<endl;
            else
            {
                path(mp[s],mp[s2]);

                ll sz = ans.size();
                for(k=0; k<sz-1; k++)
                {
                    cout<<mp2[ans[k]]<<" "<<mp2[ans[k+1]]<<endl;
                }
            }

        }
    }

}
