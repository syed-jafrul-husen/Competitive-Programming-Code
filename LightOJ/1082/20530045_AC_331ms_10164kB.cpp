#include<bits/stdc++.h>
using namespace std;
void build(int node,int start,int end,int tree[],int a[])
{
    if(start==end)
        tree[node]=a[start];
    else
    {
        int mid=(start+end)/2;
        build(2*node,start,mid,tree,a);
        build(2*node+1,mid+1,end,tree,a);
        if(tree[2*node]<tree[2*node+1])
            tree[node]=tree[2*node];
        else
            tree[node]=tree[2*node+1];
    }
}
void update(int node,int start,int end,int idx,int val,int tree[],int a[])
{
    if(start==end)
    {
        a[idx]=val;
        tree[node]=val;
    }
    else
    {
        int mid=(start+end)/2;
        if(idx>=start&&idx<=mid)
            update(2*node,start,mid,idx,val,tree,a);
        else
            update(2*node+1,mid+1,end,idx,val,tree,a);
        if(tree[2*node]<tree[2*node+1])
            tree[node]=tree[2*node];
        else
            tree[node]=tree[2*node+1];
    }
}
int query(int node,int start,int end,int l,int r,int tree[])
{
    if(l>end||start>r)
        return 1000005;
    if(l<=start&&r>=end)
        return tree[node];
    int p1,p2;
    int mid=(start+end)/2;
    p1=query(2*node,start,mid,l,r,tree);
    p2=query(2*node+1,mid+1,end,l,r,tree);
    if(p1<p2)
        return p1;
    else
        return p2;
}
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        int tree[2000005],a[100005];
        int n,q;
        scanf("%d%d",&n,&q);
        for(int i=1; i<=n; i++)
            cin>>a[i];
        build(1,1,n,tree,a);
        printf("Case %d:\n",i);
        while(q--)
        {
            int x,y;
            scanf("%d%d",&x,&y);
            int c=query(1,1,n,x,y,tree);
            printf("%d\n",c);
        }
    }

    return 0;
}
