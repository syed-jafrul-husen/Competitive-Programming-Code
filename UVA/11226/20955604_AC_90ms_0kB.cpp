#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int high = 500050;

ll arr[500050];
ll tree[3*500050];

ll spf[high+5], divisor[high+5];


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


void sieve()
{
    spf[1] = 1;
    for (ll i=2; i<high; i++)
        spf[i] = i;
    for (ll i=4; i<high; i+=2)
        spf[i] = 2;
    for (ll i=3; i*i<high; i++)
    {
        if (spf[i] == i)
        {
            for (ll j=i*i; j<high; j+=i)
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}

ll m[high],mu[high];

int main()
{
    //freopen("output.txt","w",stdout);
    sieve();
    arr[1] = 1;
    for(ll i=2; i<=500001; i++)
    {
        ll c = 0,sm=i,y,x;
        while(1)
        {
            x = sm;
            y = sm;
            sm = 0;
            while (x != 1)
            {
                sm+=spf[x];
                x = x / spf[x];
            }
            ++c;
            if(y==sm)
                break;
        }
        arr[i] = c;
    }

    ll n,x,c,te=0,t,y;
    buildTree(1,1,500001);
    scanf("%lld",&t);
    while(t--)
    {
        ++te;
        scanf("%lld%lld",&x,&y);
        if(y<x)
            swap(x,y);
        printf("Case #%lld:\n",te);
        c = query(1,1,500001,x,y);
        printf("%lld\n",c);

    }
}
