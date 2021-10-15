#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll>vt;
vector<ll>vt2;
map<ll,ll>mp;
ll mx = 1000000000000,sz;

void dfs(ll sm)
{
    if(sm>0 && sm<=mx)
    {
        vt.push_back(sm);
    }
    if(sm>mx)
        return;
    dfs(sm*10+4);
    dfs(sm*10+7);
}

void solve(ll idx,ll num)
{
    if(idx>=vt.size())
        return;
    for(ll i=idx; i<vt.size(); i++)
    {
        ll ans = num*vt[i];
        if(ans<=0 || ans>=mx)
            return;
        if(mp[ans]==0)
        {
            vt2.push_back(ans);
            mp[ans] = 1;
        }
        solve(i,ans);
    }
}

int main()
{
    dfs(0);
    sort(vt.begin(),vt.end());
    solve(0,1);
    sort(vt2.begin(),vt2.end());
    ll i,t;

    cin>>t;
    for(i=1; i<=t; i++)
    {
        ll x,y;
        cin>>x>>y;
        printf("Case %lld: ", i);
        //cout<<distance(it,it2)<<endl;

        cout<< upper_bound(vt2.begin(),vt2.end(),y)-lower_bound(vt2.begin(),vt2.end(),x) <<endl;
    }
}
