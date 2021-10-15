#include<bits/stdc++.h>
using namespace std;
#define N 1000006

int flag[N+5],prime[N+5],vis[N+5];
int total;
vector<int>adj[N+5];

int sieve(){
    int i,j,val;val = sqrt(N)+1;
    flag[1] = 1;//if a is not prime;
    for(i=2; i<val; i++)
        if(flag[i]==0)
            for(j=i; i*j<=N; j++)
                flag[i*j]=1;
    for(i=2; i<N; i++)
        if(flag[i]==0)
            prime[total++]=i;
    return total;}

void Divisor(int n)
{
    int x = n;
    for(int i=0; prime[i]*prime[i]<=n; i++)
    {
        if(n%prime[i]==0)
        {
            while(n%prime[i]==0)
            {
                n/=prime[i];
            }
            int y = prime[i];
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
    }
    if(n>1)
    {
        int y = n;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}

void DFS(int u)
{
    vis[u] = 1;
    int sz = adj[u].size();
    for(int i=0; i<sz; i++)
    {
        int v = adj[u][i];
        if(vis[v]==0)
            DFS(v);
    }
}

int main()
{
    sieve();
    int t,tc=0,i,j,k,cnt,n;
    cin>>t;
    while(t--)
    {
        cnt = 0;
        for(i=0; i<=1000000; i++)
        {
            adj[i].clear();
            vis[i] = 0;
        }
        cin>>n;
        vector<int>vt,p;
        for(i=0; i<n; i++)
        {
            cin>>k;
            if(k==1)
                ++cnt;
            else if(flag[k]==0)
                p.push_back(k);
            else
                vt.push_back(k);
        }
        int vtsz = vt.size();
        for(i=0; i<vtsz; i++)
            Divisor(vt[i]);
        int psz = p.size();
        for(i=0; i<psz; i++)
        {
            if(vis[p[i]]==0)
            {
                cnt+=1;
                DFS(p[i]);
            }
        }
        for(i=0; i<vtsz; i++)
        {
            if(vis[vt[i]]==0)
            {
                cnt+=1;
                DFS(vt[i]);
            }
        }
        ++tc;
        printf("Case %d: %d\n",tc,cnt);
    }
}
