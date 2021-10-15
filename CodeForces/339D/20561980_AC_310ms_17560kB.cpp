#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[1310727];
ll tree[3*310727];

void buildTree(ll node,ll b,ll e,bool h)
{
    if(b==e)
    {
        tree[node] = arr[b];
        return;
    }
    ll left = node*2;
    ll right = node*2+1;
    ll mid = (b+e)/2;

    h = h^1;
    buildTree(left,b,mid,h);
    buildTree(right,mid+1,e,h);
    h = h^1;
    if(h==1)
        tree[node] = tree[left] | tree[right];
    else
        tree[node] = tree[left] ^ tree[right];
}

ll query(ll node,ll b,ll e,ll i,ll j)
{
    if(i>e || j<b)
        return -1;
    if(b>=i && e<=j)
        return tree[node];
    ll left = node*2;
    ll right = node*2+1;
    ll mid = (b+e)/2;
    int p1 = query(left,b,mid,i,j);
    int p2 = query(right,mid+1,e,i,j);
    return p1*p2;
}

void update(ll node,ll b,ll e,ll i,ll newValue,bool h)
{
    if(i>e || i<b)
        return;
    if(b>=i && e<=i)// same as b==e
    {
        tree[node] = newValue;
        return;
    }
    ll left = node*2;
    ll right = node*2+1;
    ll mid = (b+e)/2;
    h = h^1;
    update(left,b,mid,i,newValue,h);
    update(right,mid+1,e,i,newValue,h);
    h = h^1;
    if(h==1)
        tree[node] = tree[left] | tree[right];
    else
        tree[node] = tree[left] ^ tree[right];
}

int main()
{
    ll n,i,j,x,y,q;
    scanf("%lld%lld",&n,&q);
    bool h;
    if(n%2==1)
        h = true;
    else
        h = false;
    n = powl(2,n);

    for(i=1; i<=n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    buildTree(1,1,n,h);
    for(i=0; i<q; i++)
    {
        scanf("%lld%lld",&x,&y);
        update(1,1,n,x,y,h);
        printf("%d\n",tree[1]);

    }

    return 0;
}
