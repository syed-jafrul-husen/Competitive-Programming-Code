#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[100005];

ll nd;
ll a[100000002];
struct info
{
    ll mx,mx2;
}tree[100005*3];

void buildTree(ll node,ll b,ll e)
{
    if(b==e)
    {
        tree[node].mx = arr[b];
        tree[node].mx2 = INT_MIN;
        return;
    }
    ll left = node*2;
    ll right = node*2+1;
    ll mid = (b+e)/2;

    buildTree(left,b,mid);
    buildTree(right,mid+1,e);

    tree[node].mx = max(tree[left].mx,tree[right].mx);
    tree[node].mx2 = min(max(tree[left].mx,tree[right].mx2),max(tree[left].mx2,tree[right].mx));
}

info query(ll node,ll b,ll e,ll i,ll j)
{
    info res;
    res.mx = 0;
    res.mx2 = 0;
    if(i>e || j<b)
        return res;
    if(b>=i && e<=j)
        return tree[node];
    ll left = node*2;
    ll right = node*2+1;
    ll mid = (b+e)/2;
    if(j<=mid)
        query(left,b,mid,i,j);
    if(i>mid)
         query(right,mid+1,e,i,j);
    info p1 = query(left,b,mid,i,j);
    info p2 = query(right,mid+1,e,i,j);
    res.mx = max(p1.mx,p2.mx);
    res.mx2 = min(max(p1.mx,p2.mx2),max(p1.mx2,p2.mx));
    return res;
}

void update(ll node,ll b,ll e,ll i,ll newValue)
{
    if(i>e || i<b)
        return;
    if(b>=i && e<=i)// same as b==e
    {
        tree[node].mx = newValue;
        tree[node].mx2 = INT_MIN;
        return;
    }
    ll left = node*2;
    ll right = node*2+1;
    ll mid = (b+e)/2;
    update(left,b,mid,i,newValue);
    update(right,mid+1,e,i,newValue);

    tree[node].mx = max(tree[left].mx,tree[right].mx);
    tree[node].mx2 = min(max(tree[left].mx,tree[right].mx2),max(tree[left].mx2,tree[right].mx));
}

int main()
{
	ll n,i,j,x,y;
	scanf("%lld",&n);
	for(i=1; i<=n; i++)
    {
        scanf("%lld",&arr[i]);
        a[arr[i]] = i;

    }
    buildTree(1,1,n);
    ll q; scanf("%lld",&q);
    while(q--)
    {

        char ch;
        scanf(" %c%lld%lld",&ch,&x,&y);
        if(ch=='Q')
        {
            info ans = query(1,1,n,x,y);

            cout<<ans.mx+ans.mx2<<endl;
        }
        else
            update(1,1,n,x,y);
    }
	return 0;
}
