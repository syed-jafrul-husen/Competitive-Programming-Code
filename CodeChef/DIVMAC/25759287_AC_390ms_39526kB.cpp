#include<bits/stdc++.h>
using namespace std;

#define N 1000001

int p[N+2];
int arr[N],tree[N*4];

void build(int node,int b,int e)
{
    if(b==e)
    {
        tree[node] = p[arr[b]];
        return;
    }
    int left = node*2;
    int right = node*2+1;
    int m = (b+e)/2;
    build(left,b,m);
    build(right,m+1,e);
    tree[node] = max(tree[left],tree[right]);
}

int query(int node,int b,int e,int i,int j)
{
    if(i>e || j<b)
        return 1;
    if(tree[node]==1)
        return 1;
    if(b>=i && e<=j)
        return tree[node];
    int m = (b+e)/2;
    int left = node*2;
    int right = node*2+1;
    int p1 = query(left,b,m,i,j);
    int p2 = query(right,m+1,e,i,j);
    return max(p1,p2);
}

void update(int node,int b,int e,int i,int j)
{
    if(i>e || j<b)
        return;
    if(tree[node]==1)
        return;
    if(b>=i && e<=j)
    {
        if(b==e)
        {
            arr[b] = arr[b]/p[arr[b]];
            tree[node] = p[arr[b]];
            return;
        }
    }
    int left = node*2;
    int right = (node*2)+1;
    int mid = (b+e)/2;
    update(left,b,mid,i,j);
    update(right,mid+1,e,i,j);
    tree[node] = max(tree[left],tree[right]);
}

void sieve()
{
    p[1] = 1;
    for(int i=2; i<N; i++)
    {
        if(i%2==1)
            p[i] = i;
        else
            p[i] = 2;
    }
    for(int i=3; i*i<N; i+=2)
    {
        if(p[i]==i)
        {
            for(int j=i*i; j<N; j+=i)
            {
                if(p[j]==j)
                    p[j] = i;
            }
        }

    }
}

int main()
{
    int i,t,n,q,L,R,typ;
    sieve();
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&q);
        for(i=0; i<n; i++)
            scanf("%d",&arr[i]);
        build(1,0,n-1);
        while(q--)
        {
            scanf("%d%d%d",&typ,&L,&R);
            if(typ==1)
            {
                int x = query(1,0,n-1,L-1,R-1);
                printf("%d ",x);
            }
            else
                update(1,0,n-1,L-1,R-1);
        }
        printf("\n");
    }
}
