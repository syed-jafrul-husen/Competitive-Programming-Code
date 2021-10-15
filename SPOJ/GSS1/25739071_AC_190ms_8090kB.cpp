#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define N 100005
ll a[N];
 
struct node
{
    ll sm;
    ll mxSm;
    ll left;
    ll right;
};
 
node st[N*3];
 
void fillVal(ll index)
{
    ll L = index*2+1;
    ll R = index*2+2;
    st[index].sm = st[L].sm + st[R].sm;
    st[index].left = max(st[L].left,st[L].sm+st[R].left);
    st[index].right = max(st[R].right,st[R].sm+st[L].right);
    st[index].mxSm = max( max(st[L].mxSm,st[R].mxSm),st[R].left+st[L].right );
}
 
void build(ll from,ll to,ll index)
{
    if(from==to)
    {
        st[index].sm = st[index].mxSm = st[index].left = st[index].right = a[from];
        return;
    }
 
    //ll mid = from + (to-from)/2;
    ll mid = (to+from)/2;
    build(from,mid,index*2+1);
    build(mid+1,to,index*2+2);
    fillVal(index);
}
 
node Combination(node L, node R){
    node ret;
    ret.sm = L.sm + R.sm;
    ret.left = max(L.left, L.sm + R.left);
    ret.right = max(R.right, R.sm + L.right);
    ret.mxSm = max(max(L.mxSm, R.mxSm), R.left + L.right);
    return ret;
}
 
node query(ll index,ll from,ll to,ll l,ll r)
{
    if(r<from || l>to)
    {
        node ret;
        ret.left = ret.right = ret.sm = ret.mxSm = 0;
        return ret;
    }
 
    if(from>= l&& to<=r)
        return st[index];
    ll mid = (to+from)/2;
    if(r<=mid)
        return query(index*2+1,from,mid,l,r);
    if(l>mid)
        return query(index*2+2,mid+1,to,l,r);
 
    node Lchild = query(index*2+1,from,mid,l,r);
    node Rchild = query(index*2+2,mid+1,to,l,r);
    return Combination(Lchild,Rchild);
}
 
int main()
{
    ll n,t,m,i,j,k,c=0,cnt=0,q,ans;
    scanf("%lld",&n);
    for(i=0; i<n; i++)
        scanf("%lld",&a[i]);
    build(0,n-1,0);
    scanf("%lld",&q);
    while(q--)
    {
        ll l,r;
        scanf("%lld%lld",&l,&r);
        ans = query(0,0,n-1,l-1,r-1).mxSm;
        printf("%lld\n",ans);
    }
 
 
}