#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>v[205];
ll s[205],f[205],color[205];
ll white=0,grey=1,black=-1,t=0;
void topo_sort(ll u)
{
    ++t;
    color[u]=grey;
    s[u]=t;
    ll sz=v[u].size();
    for(ll i=0; i<sz; i++)
    {
        ll adj=v[u][i];
        if( color[adj]==white)
        {
            topo_sort(adj);
        }
    }
    ++t;
    f[u]=t;
    color[u]=black;
}

int main()
{
    ll n,e,tc=0,m,i;
    ll u,x,y,k,z;
    cin>>z;
    while(z--)
    {
        ++tc;
        ll c = 0;
    t = 0;
        cin>>n>>m;
        while(m--)
        {
            cin>>x>>k;
            for(i=0; i<k; i++)
            {
                cin>>y;
                v[y].push_back(x);
            }
        }
        for(i=1; i<=n; i++)
        {
            sort(v[i].rbegin(),v[i].rend());
        }
        //topo_sort(1);
        for(ll i=n; i>=1; i--)
        {
            if(color[i]==white)
                topo_sort(i);
        }
        vector< pair<ll,ll> >p;
        for(ll i=1; i<=n; i++)
        {
            p.push_back(make_pair(f[i],i));
        }
        sort(p.begin(),p.end());
        for(ll i=n-1; i>=0; i--)
        {

            k = p[i].second;
            cout<<k;
            if(i>0)
                cout<<" ";
        }
        cout<<endl;
        if(z>0)
            cout<<endl;
        for(ll i=1; i<=n; i++)
            v[i].clear();
        for(ll i=0; i<202; i++)
        {
            s[i]=0,f[i]=0,color[i]=0;
        }
    }
}
