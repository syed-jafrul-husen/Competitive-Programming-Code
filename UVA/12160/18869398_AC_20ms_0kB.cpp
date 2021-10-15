#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll vis[10002],R[100];
ll e,x,y,m,n,t,i,j,k,a,b,c;

void BFS()
{
    queue<ll>q;
    vis[a] = 1;
    q.push(a);
    while(!q.empty())
    {
        if(vis[b]==1)
            break;
        n = q.front();
        q.pop();
        for(i=0; i<c; i++)
        {
            k = n+R[i];
            if(k>9999)
                k = k-9999-1;
            if(!vis[k])
            {
                vis[k] = vis[n]+1;
                q.push(k);
            }
        }
    }
}
int main()
{
    t = 0;
    while(1)
    {
        ++t;
        cin>>a>>b>>c;
        if(a==0 && b==0 && c==0)
            break;
        memset(vis,0,sizeof(vis));
        for(i=0; i<c; i++)
        {
            cin>>R[i];
        }
        BFS();
        if(!vis[b])
        {
            printf("Case %lld: Permanently Locked\n",t);
        }
        else
            printf("Case %lld: %lld\n",t,vis[b]-1);
    }
    return 0;
}
