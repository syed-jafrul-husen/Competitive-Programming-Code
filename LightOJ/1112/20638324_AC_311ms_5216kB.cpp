#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sz 100005
ll arr[sz],tree[sz*3];

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

    tree[node] = tree[left] + tree[right];
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
    return p1+p2;
}

void update(ll node,ll b,ll e,ll i,ll newValue)
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
    update(left,b,mid,i,newValue);
    update(right,mid+1,e,i,newValue);
    tree[node] = tree[left]+tree[right];
}

int main()
{
    ll n,m,i,j,k,t,q,typ,x,y,z;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld%lld",&n,&q);
        for(j=1; j<=n; j++)
            scanf("%lld",&arr[j]);
        buildTree(1,1,n);
        printf("Case %lld:\n",i);
        while(q--)
        {
            scanf("%lld",&typ);
            if(typ==1)
            {
                scanf("%lld",&x);
                ++x;
                m = query(1,1,n,x,x);
                printf("%lld\n",m);
                update(1,1,n,x,0);
            }
            else if(typ==2)
            {
                scanf("%lld%lld",&x,&y);
                ++x;
                m = query(1,1,n,x,x);
                update(1,1,n,x,y+m);
            }
            else
            {
                scanf("%lld%lld",&x,&y);
                ++x;++y;
                m = query(1,1,n,x,y);
                printf("%lld\n",m);
            }
        }
    }
}
