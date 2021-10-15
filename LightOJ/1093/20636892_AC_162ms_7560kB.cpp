#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[100005];
ll tree[100005*3],tree2[100005*3];

void buildTree(ll node,ll b,ll e)
{
    if(b==e)
    {
        tree[node] = arr[b];
        return;
    }
    ll left = node*2;
    ll right = node*2+1;
    ll mid = (b+e)/2;

    buildTree(left,b,mid);
    buildTree(right,mid+1,e);
    tree[node] = max(tree[left],tree[right]);
}

ll query(ll node,ll b,ll e,ll i,ll j)
{
    if(i>e || j<b)
        return 0;
    if(b>=i && e<=j)
        return tree[node];
    ll left = node*2;
    ll right = node*2+1;
    ll mid = (b+e)/2;
    int p1 = query(left,b,mid,i,j);

    int p2 = query(right,mid+1,e,i,j);
    return max(p1,p2);
}

void buildTree2(ll node,ll b,ll e)
{
    if(b==e)
    {
        tree2[node] = arr[b];
        return;
    }
    ll left = node*2;
    ll right = node*2+1;
    ll mid = (b+e)/2;

    buildTree2(left,b,mid);
    buildTree2(right,mid+1,e);

    tree2[node] = min(tree2[left],tree2[right]);
}

ll query2(ll node,ll b,ll e,ll i,ll j)
{
    if(i>e || j<b)
        return 100000008;
    if(b>=i && e<=j)
        return tree2[node];
    ll left = node*2;
    ll right = node*2+1;
    ll mid = (b+e)/2;
    int p1 = query2(left,b,mid,i,j);
    int p2 = query2(right,mid+1,e,i,j);
    return min(p1,p2);
}

int main()
{
    ll n,i,j,x,y,t,m;
    scanf("%lld",&t);
    for(j=1; j<=t; j++)
    {
        scanf("%lld%lld",&n,&m);
        for(i=1; i<=n; i++)
        {
            scanf("%lld",&arr[i]);
        }
        buildTree(1,1,n);
        buildTree2(1,1,n);
        ll q = n-m;
        ll res = 0,mx,mn;
        if(m>1)
        {
            for(i=1; i<=q+1; i++)
            {
                mx = query(1,1,n,i,i+m-1);
                mn = query2(1,1,n,i,i+m-1);
                if(abs(mx-mn)>res)
                    res = abs(mx-mn);
               //cout<<mx<<" "<<mn<<endl;
            }
        }
        printf("Case %lld: %lld\n",j,res);
    }
    return 0;
}
