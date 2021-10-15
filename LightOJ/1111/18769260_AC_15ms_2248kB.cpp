#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<bool>visit;
vector<int>grp[1005];
int level[1005];
int n,a[105];
void bfs(int u)
{
    int frnt,i,sz;
    queue<int>q;
    q.push(u);
    ++level[u];
    visit[u] = true;
    while(!q.empty())
    {
        frnt = q.front();
        q.pop();
        sz = grp[frnt].size();
        for(i=0; i<sz; i++)
        {
            if(!visit[grp[frnt][i]])
            {
                ++level[grp[frnt][i]];
                q.push(grp[frnt][i]);
                visit[grp[frnt][i]] = true;
            }
        }
    }
}
int main()
{
    int e,u,v,i,j,t,x,k,m;
    scanf("%d",&t);
    for(j=1; j<=t; j++)
    {
        scanf("%d%d%d",&k,&n,&m);
        visit.assign(n+2,false);
        memset(level,0,sizeof(level));
        for(int i=0;i<=n;++i)
            grp[i].clear();
        for(i=0; i<k; i++)
            scanf("%d",&a[i]);

        for(i=0; i<m; i++)
        {
            scanf("%d%d",&u,&v);
            grp[u].push_back(v);
        }
        for(i=0; i<k; i++)
        {
            visit.assign(n+2,false);
            bfs(a[i]);
            
        }
        e = 0;
        for(i=1; i<=n; i++)
        {
            if(level[i]==k)
                ++e;
        }
        printf("Case %d: %d\n",j,e);
    }
    return 0;

}
