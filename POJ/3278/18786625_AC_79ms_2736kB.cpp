
#include<iostream>
#include<queue>
#include<cstring>
#include<cstdio>
using namespace std;
int level[300005];
int visit[300005];

int bfs(int s,int d)
{
    int frnt,i,sz;
    queue <int> q;
    q.push(s);
    level[s] = 0;
    visit[s] = 1;
    int t;
    while(!q.empty())
    {
        frnt = q.front();
        q.pop();
        if(frnt-1>=0)
        {
            if(!visit[frnt-1])
            {
                q.push(frnt-1);
                level[frnt-1] = level[frnt]+1;
                visit[frnt-1] = 1;
            }
            if(d==frnt-1)
                return level[frnt-1];
        }
        if(frnt+1<=100000)
        {
            if(!visit[frnt+1])
            {
                q.push(frnt+1);
                level[frnt+1] = level[frnt]+1;
                visit[frnt+1] = 1;
            }
            if(d==frnt+1)
                return level[frnt+1];
        }
        if(frnt*2<=100000)
        {
            if(!visit[frnt*2])
            {
                q.push(frnt*2);
                level[frnt*2] = level[frnt]+1;
                visit[frnt*2] = 1;
            }
            if(d==frnt*2)
                return level[frnt*2];
        }
    }
}

int main()
{
    int e,u,v,i,j,t,x,k,m;
    scanf("%d%d",&t,&m);
    memset(level,0,sizeof(level));
    memset(visit,0,sizeof(visit));
    if(t>=m)
        printf("%d\n",t-m);
    else
    {
        x = bfs(t,m);
        printf("%d\n",x);
    }

    return 0;
}
