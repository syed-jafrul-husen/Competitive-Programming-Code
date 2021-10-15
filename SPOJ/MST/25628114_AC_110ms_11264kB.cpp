#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 99999999
typedef pair<ll,ll>iPair;
vector<iPair>adj[100005]; ll V;
void primMST()
{
    ll ans = 0;
    priority_queue<iPair,vector<iPair>,greater<iPair> >pq;
    ll src = 1;
    vector<ll>key(V,INF);
    vector<ll>parent(V,-1);
    vector<bool>inMST(V,false);
 
    pq.push(make_pair(0,src));
    key[src] = 0;
    while(!pq.empty())
    {
        ll u = pq.top().second;
        pq.pop();
        inMST[u] = true;
        vector<pair<ll,ll> >::iterator i;
        for(i=adj[u].begin(); i!=adj[u].end(); i++)
        {
            ll v = (*i).first;
            ll weight = (*i).second;
            if(inMST[v]==false &&key[v]>weight)
            {
                key[v] = weight;
                //ans+=weight;
                pq.push(make_pair(key[v],v));
                parent[v] = u;
            }
        }
    }
    for(ll i=2; i<V; i++)
        ans = ans + key[i];
    printf("%lld\n",ans);
}
int main()
{
    ll n,e,u,v,w;
    scanf("%lld%lld",&V,&e);
    V+=1;
    for(int i=0; i<e; i++)
    {
        scanf("%lld%lld%lld",&u,&v,&w);
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }
    primMST();
}
 