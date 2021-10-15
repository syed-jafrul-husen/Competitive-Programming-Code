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

    tree[node] = tree[left] * tree[right];
}

ll query(ll node,ll b,ll e,ll i,ll j)
{
    if(i>e || j<b)
        return 1;
    if(b>=i && e<=j)
        return tree[node];
    ll left = node*2;
    ll right = node*2+1;
    ll mid = (b+e)/2;
    int p1 = query(left,b,mid,i,j);
    int p2 = query(right,mid+1,e,i,j);
    return p1*p2;
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
    tree[node] = tree[left]*tree[right];
}

int main()
{
    ll n,i,j,x,y,q;
    //freopen("output.txt","w",stdout);
    while(scanf("%lld%lld",&n,&q)==2)
    {
        for(i=1; i<=n; i++)
        {

            scanf("%lld",&arr[i]);
            ll y = arr[i];
            if(y<0)
                y = -1;
            else if(y>0)
                y = 1;
            else
                y = 0;
            arr[i] = y;
        }
        for(i=1; i<=300000; i++)
            tree[i] = 1;
        buildTree(1,1,n);
        for(i=0; i<q; i++)
        {
            char ch;
            scanf(" %c%lld%lld",&ch,&x,&y);
            if(ch=='C')
            {
                if(y<0)
                    y = -1;
                else if(y>0)
                    y = 1;
                update(1,1,n,x,y);
            }

            else
            {

                ll c=query(1,1,n,x,y);
                if(c>0)
                    printf("+");
                else if (c<0)
                    printf("-");
                else
                    printf("0");
            }

        }
        printf("\n");

    }


    return 0;
}
