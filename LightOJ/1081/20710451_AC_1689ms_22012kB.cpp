#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[505][505];
ll tree[3*505][3*505];

void buildTree(ll row,ll node,ll b,ll e)
{
    if(b==e)
    {
        tree[row][node] = arr[row][b];
        return;
    }
    ll left = node*2;
    ll right = node*2+1;
    ll mid = (b+e)/2;

    buildTree(row,left,b,mid);
    buildTree(row,right,mid+1,e);

    tree[row][node] = max(tree[row][left],tree[row][right]);
}

ll query(ll row,ll node,ll b,ll e,ll i,ll j)
{
    if(i>e || j<b)
        return 0;
    if(b>=i && e<=j)
        return tree[row][node];
    ll left = node*2;
    ll right = node*2+1;
    ll mid = (b+e)/2;
    int p1 = query(row,left,b,mid,i,j);
    int p2 = query(row,right,mid+1,e,i,j);
    return max(p1,p2);
}

void update(ll row,ll node,ll b,ll e,ll i,ll newValue)
{
    if(i>e || i<b)
        return;
    if(b>=i && e<=i)// same as b==e
    {
        tree[row][node] = newValue;
        return;
    }
    ll left = node*2;
    ll right = node*2+1;
    ll mid = (b+e)/2;
    update(row,left,b,mid,i,newValue);
    update(row,right,mid+1,e,i,newValue);
    tree[row][node] = max(tree[row][left],tree[row][right]);
}

int main()
{
    ll n,i,j,x,y,t,r,c,k,q,s;
    scanf("%lld",&t);

    for(k=1; k<=t; k++)
    {
        scanf("%lld%lld",&n,&q);
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++){
                scanf("%lld",&arr[i][j]);}
            buildTree(i,1,1,n);
        }
        printf("Case %lld:\n",k);
        while(q--)
        {
            ll ans=0;
            scanf("%lld%lld%lld",&r,&c,&s);
            for(i=r; i<=r+s-1; i++)
            {
                ll temp = query(i,1,1,n,c,c+s-1);
                ans = max(ans,temp);
            }
            printf("%lld\n",ans);
        }
    }
    return 0;
}
