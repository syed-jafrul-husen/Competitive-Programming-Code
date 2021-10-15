#include<bits/stdc++.h>
using namespace std;

int p[100005],c[100005],id[100005];
long long ans[100005];
priority_queue<int,vector<int>,greater<int> >pq;

bool cmp(int i,int j)
{
    return (p[i]<p[j]);
}

int main()
{
    int n,k,i,j;
    cin>>n>>k;
    for(i=1; i<=n; i++)
        cin>>p[i];
    for(i=1; i<=n; i++)
        cin>>c[i];
    for(i=1; i<=n; i++)
        id[i] = i;
    sort(id+1,id+n+1,cmp);
    long long  s=0;
    for(i=1; i<=n; i++)
    {
        s+=c[ id[i] ];
        ans[ id[i] ] = s;
        pq.push(c[ id[i] ]);
        if(pq.size()>k)
            s-=pq.top(),pq.pop();
    }
    for(i=1; i<=n; i++)
        cout<<ans[i]<<" ";
}
