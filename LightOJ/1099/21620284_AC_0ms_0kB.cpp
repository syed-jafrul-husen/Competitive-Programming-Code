#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define INF 9999999999999
ll dist[N],dist2[N];
bool vis[N];

vector<pair<ll,ll> >vt[N];

void dijkstra(int src)
{
    dist[src] = 0;
    //dist2[src] = 0;
    set<pair<ll,ll> >Q;
    set<pair<ll,ll> >::iterator it;
    Q.insert( {0,src} );
    while(!Q.empty())
    {
        it = Q.begin();
        Q.erase(it);
        ll u = it->second;
        ll  wei = it->first;
        ll sz = vt[u].size();
        for(ll i=0; i<sz; i++)
        {
            ll v = vt[u][i].first;
            ll w = vt[u][i].second;
            if(wei+w<dist[v])
            {
                dist2[v]=dist[v];
                dist[v]=wei+w;
                Q.insert({wei+w,v});
            }
            if(dist[v]==wei+w)
                continue;
            if(dist2[v]>wei+w)
            {
                dist2[v]=wei+w;
                Q.insert({dist2[v],v});
            }
        }
    }
}

int main()
{
    ll n,e,i,j,k,l,t,te=0,c,u,v;
    cin>>t;
    while(t--)
    {
        ++te;
        cin>>n>>e;
        for(i=0; i<e; i++)
        {
            cin>>u>>v>>c;
            vt[u].push_back(make_pair(v,c));
            vt[v].push_back(make_pair(u,c));
        }
        for(i=0; i<=n; i++)
        {
            dist[i] = dist2[i] = INF;
        }

        dijkstra(1);
        for(i=0; i<=n; i++)
        {
            vt[i].clear();
        }
        printf("Case %lld: %lld\n",te,dist2[n]);
    }
}
