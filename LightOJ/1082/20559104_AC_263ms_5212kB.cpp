#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[100005];
ll tree[3*100005];

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

    tree[node] = min(tree[left],tree[right]);
}

ll query(ll node,ll b,ll e,ll i,ll j)
{
    if(i>e || j<b)
        return 1000000000;
    if(b>=i && e<=j)
        return tree[node];
    ll left = node*2;
    ll right = node*2+1;
    ll mid = (b+e)/2;
    int p1 = query(left,b,mid,i,j);
    int p2 = query(right,mid+1,e,i,j);
    return min(p1,p2);
}

void update(ll node,ll b,ll e,ll i,ll newValue)
{
    if(i>e || i<b)
        return;
    if(i>e || i<b)// same as b==e
    {
        tree[node] = newValue;
        return;
    }
    ll left = node*2;
    ll right = node*2+1;
    ll mid = (b+e)/2;
    update(left,b,mid,i,newValue);
    update(right,mid+1,e,i,newValue);
    tree[node] = min(tree[left],tree[right]);
}

int main()
{
	ll n,i,j,q,t;
	scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld%lld",&n,&q);
        for(j=1; j<=n; j++)
            scanf("%lld",&arr[j]);
        for(j=0; j<=n*3; j++)
        {
            tree[j] = 1000000000;
        }
        buildTree(1,1,n);
        printf("Case %lld:\n",i);
        while(q--)
        {
            ll x,y;
            scanf("%lld%lld",&x,&y);
            ll c=query(1,1,n,x,y);
            printf("%lld\n",c);
        }
    }

	return 0;
}
