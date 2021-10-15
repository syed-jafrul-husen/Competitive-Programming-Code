#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <queue>
#include <cstdio>
#include <set>
#include <math.h>
#include <algorithm>
#include <queue>
#include <iomanip>
#include <map>
#define INF 0x3f3f3f3f
#define MAXN 105
#define Mod 20007
using namespace std;
int n,m,k;
int a[105],num[1005],vis[1005];
vector<int> mp[1005];
void dfs(int v)
{
    for(unsigned int i=0;i<mp[v].size();++i)
    {
        int x=mp[v][i];
        if(!vis[x])
        {
            vis[x]=1;
            num[x]++;
            dfs(x);
        }
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int cas=1; cas<=t; ++cas)
    {
        memset(num,0,sizeof(num));
        scanf("%d%d%d",&k,&n,&m);
        for(int i=0;i<=n;++i)
            mp[i].clear();
        for(int i=0;i<k;++i)
            scanf("%d",&a[i]);
        while(m--)
        {
            int u,v;
            scanf("%d%d",&u,&v);
            mp[u].push_back(v);
        }
        for(int i=0;i<k;++i)
        {
            memset(vis,0,sizeof(vis));
            vis[a[i]]=1;
            num[a[i]]++;
            dfs(a[i]);
        }
        int ans=0;
        for(int i=1;i<=n;++i)
        {
            if(num[i]==k)
                ans++;
        }
        printf("Case %d: %d\n",cas,ans);
    }
    return 0;
}
