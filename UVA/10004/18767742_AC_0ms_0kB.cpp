#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<bool>visit;
vector< vector<int> >grp;
int level[100002],data[100006];
int n,ans=0;
void bfs(int u)
{
    int frnt,i,sz;
    queue<int>q;
    q.push(u);
    level[u] = 0;
    ans = 0;
   // visit[u] = true;
    while(!q.empty())
    {
        frnt = q.front();
        q.pop();

        sz = grp[frnt].size();
        for(i=0; i<sz; i++)
        {
            if(level[grp[frnt][i]]==-1)
            {
                if(level[frnt]==0)
                    level[grp[frnt][i]]=1;
                else
                    level[grp[frnt][i]]=0;
                q.push(grp[frnt][i]);
            }
            else
            {
                if(level[grp[frnt][i]]==level[frnt])
                {
                    ans = 1;
                    break;
                }
            }
        }
        if(ans==1)
            break;
    }
}
int main()
{
    int e,u,v,i,j,t,x,l;
    while(1)
    {
        ans=0;
        scanf("%d",&n);
        if(n==0)
            break;
        scanf("%d",&l);
        //visit.assign(n+2,false);
        memset(level,-1,sizeof(level));
        grp.assign(100002,vector<int>());
        for(i=0; i<l; i++)
        {
            scanf("%d%d",&u,&v);
            grp[u].push_back(v);
            grp[v].push_back(u);
        }
        bfs(0);
        if(ans)
            printf("NOT BICOLORABLE.\n");
        else
            printf("BICOLORABLE.\n");
    }



}
