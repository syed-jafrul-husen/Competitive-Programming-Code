#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
vector<pair<ll,ll> >vt[100005];
ll dist[100005];
ll par[100005];
bool vis[100005];
#define INF 1000000000000
 
void dijkstra(ll src)
{
    dist[src] = 0;
    par[src] = src;
    multiset< pair<ll,ll> >st;
    st.insert({0,src});
    while(!st.empty())
    {
        pair<ll,ll>p = *st.begin();
        st.erase(st.begin());
        ll u = p.second;
        ll wei = p.first;
        ll sz = vt[u].size();
        for(ll i=0; i<sz; i++)
        {
            ll v = vt[u][i].first;
            ll w = vt[u][i].second;
            if(dist[u]+w<dist[v])
            {
                dist[v] = dist[u]+w;
                //cout<<u<<" "<<v<<endl;
                st.insert( {dist[v],v} );
                par[v] = u;
                //cout<<v<<" "<<u<<endl;
            }
        }
    }
}
 
 
void path(ll s,ll d)
{
    if(s==d)
    {
        cout<<s<<" ";
        return;
    }
    else
    {
        path(s,par[d]);
    }
    cout<<d<<" ";
}
 
int main()
{
    ll n,e,i,j,k,u,v,c;
    cin>>n>>e;
    for(i=0; i<e; i++)
    {
        cin>>u>>v>>c;
        vt[u].push_back(make_pair(v,c));
        vt[v].push_back(make_pair(u,c));
    }
    for(i=1; i<=n; i++)
    {
        dist[i] = INF;
    }
    dijkstra(1);
    for(i=0; i<=n; i++)
        vt[i].clear();
    if(dist[n]==INF)
        cout<<-1<<endl;
    else
    {
        ll s = 1;
        ll d = n;
        path(s,d);
    }
 
 
 
}