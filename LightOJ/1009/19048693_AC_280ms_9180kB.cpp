
#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<bool>visit;
vector< vector<int> >grp;

int level[100002],data[100006],mx=0;
int n;
int ans=0,ans2=0;
void bfs(int u)
{
    int frnt,i,sz;
    queue<int>q;
    q.push(u);
    sz = grp[u].size();
    level[u] = 0;
    if(level[u]%2==1)
        ++ans;
    else
        ++ans2;
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
                if(level[grp[frnt][i]]%2==1)
                    ++ans;
                else
                    ++ans2;
                q.push(grp[frnt][i]);
                visit[grp[frnt][i]] = true;
            }
        }
    }
}
int main()
{
    //freopen("jaf.txt","w",stdout);
    int e,u,v,i,j,t,x;
    scanf("%d",&t);
    for(j=1; j<=t; j++)
    {
        scanf("%d",&n);
        visit.assign(100002,false);
        memset(level,0,sizeof(level));
        vector<int>vt;
        grp.assign(100002,vector<int>());
        for(i=0; i<n; i++)
        {
            scanf("%d%d",&u,&v);
            grp[u].push_back(v);
            grp[v].push_back(u);
            vt.push_back(u);
            vt.push_back(v);
        }
        int sz = vt.size();
        int mx = 0;
        for(i=0; i<sz; i++)
        {
            if(!visit[vt[i]])
            {
                ans = 0,ans2=0;
                bfs(vt[i]);
                //cout<<ans<<" "<<ans2<<endl;
                mx +=( max(ans,ans2));
            }
        }

        printf("Case %d: %d\n",j,mx);
    }


}
