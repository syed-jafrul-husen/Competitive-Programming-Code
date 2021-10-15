#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
vector<ll>vt,vt2,vt3;
ll n,k;
 
void dfs(int idx, ll val)
{
    vt2.push_back(val);
    if(idx==n/2) return;
    dfs(idx+1,val);
    dfs(idx+1,val+vt[idx]);
    dfs(idx+1,val+2*vt[idx]);
}
 
void dfs2(int idx, ll val)
{
    vt3.push_back(val);
    if(idx==n) return;
    dfs2(idx+1,val);
    dfs2(idx+1,val+vt[idx]);
    dfs2(idx+1,val+2*vt[idx]);
}
 
 
int main()
{
    ll t,tc,i,j,x;
    cin>>t;
    for(tc=1; tc<=t; tc++)
    {
        cin>>n>>k;
        vt.clear();
        for(i=0; i<n; i++)
        {
            cin>>x;
            vt.push_back(x);
        }
 
        vt2.clear();
        vt3.clear();
 
        dfs(0,0);
        dfs2(n/2,0);
 
        sort(vt2.begin(),vt2.end());
        sort(vt3.begin(),vt3.end());
        ll sz = vt3.size();
        ll f = 0;
        for(i=0; i<sz; i++)
        {
            if(binary_search(vt2.begin(),vt2.end(),k-vt3[i]) )
            {
                f = 1;
                break;
            }
        }
        if(f)
            printf("Case %lld: Yes\n",tc);
        else
            printf("Case %lld: No\n",tc);
    }
}