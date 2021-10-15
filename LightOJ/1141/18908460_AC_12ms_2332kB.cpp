#include<bits/stdc++.h>
using namespace std;
#define siz 1004
vector<int>vt[10005];
int level[1005];


int prime[siz];
void generate_prime()
{
    int i,j,num;
    prime[0]=2;
    prime[1]=3;
    prime[2]=5;
    for(i=3,num=7; i<siz; i++,num++)
    {
        while(1)
        {
            for(j=0; prime[j]<=num/2; j++)
            {
                if((num%prime[j])==0)
                {
                    num++;
                    break;
                }
            }
            if(prime[j]>num/2)break;
        }
        prime[i]=num;
    }
}
void factor(int s,int g)
{
    int i;
    for( i=0; i<siz && g>1; i++)
    {
        while((g%prime[i])==0)
        {
            if(prime[i]!=1 && prime[i]!=s)
            vt[s].push_back(prime[i]);
            g/=prime[i];
        }
    }
    if(i==siz && g>1)
    {
        if(prime[i]!=1 && prime[i]!=s)
        vt[s].push_back(g);
    }

}

int bfs(int u,int v)
{
    level[u] = 0;
    queue<int>q;
    q.push(u);
    while(!q.empty())
    {
        int frnt = q.front();
        q.pop();
        int i,sz=vt[frnt].size();
        for(i=0; i<sz; i++)
        {
            if( vt[frnt][i]+frnt<=v && level[vt[frnt][i]+frnt]==-1)
            {
                q.push(vt[frnt][i]+frnt);
                level[vt[frnt][i]+frnt] = level[frnt]+1;
                if(vt[frnt][i]+frnt==v)
                    return level[v];
            }
        }
    }
    return level[v];
}


int main()
{
    generate_prime();
    int n,m,i,j,u,v,e,t;
    for(i=2; i<=1000; i++)
        factor(i,i);
    cin>>t;
    for(i=1; i<=t; i++)
    {
        memset(level,-1,sizeof(level));
        cin>>u>>v;
        int ans = bfs(u,v);
        printf("Case %d: %d\n",i,ans);
    }
}
