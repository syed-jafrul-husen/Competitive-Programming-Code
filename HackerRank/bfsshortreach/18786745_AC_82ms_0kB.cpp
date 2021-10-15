#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<bool>visit;
vector<int>grp[100005];
int level[100002],data[100006];
int n;
void bfs(int u)
{
    int frnt,i,sz;
    queue<int>q;
    q.push(u);
    level[u] = 0;
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
                level[grp[frnt][i]] = level[frnt]+1;
                q.push(grp[frnt][i]);
                visit[grp[frnt][i]] = true;
            }
        }
    }
}
int main()
{
    int e,u,v,i,j,t,x,q,m,s;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d%d",&n,&e);
        visit.assign(n+2,false);
        memset(level,0,sizeof(level));
        for(i=0; i<100002; i++)
            grp[i].clear();
        for(i=0; i<e; i++)
        {
            scanf("%d%d",&u,&v);
            grp[u].push_back(v);
            grp[v].push_back(u);
        }
        scanf("%d",&s);
        bfs(s);
        for(i=1; i<=n; i++)
        {
            if(i==s)
                continue;
            if(level[i]==0)
                printf("-1 ");
            else
                printf("%d ",level[i]*6);
        }
        printf("\n");
    }

}
