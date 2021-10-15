#include<bits/stdc++.h>
using namespace std;

int white = 0;
int grey = 1;
int black = -1;
int mark = 0;
vector<int>vt[100005];
vector<int>Rvt[100005];
vector<int>components[100005];

int color[100005],grp[100003];
stack<int>stk;

void dfs(int s)
{
    color[s] = grey;
    int sz = vt[s].size();
    for(int i=0; i<sz; i++)
    {
        int v = vt[s][i];
        if(color[v]==white)
            dfs(v);
    }
    stk.push(s);
}

void dfs2(int s)
{
    grp[s] = mark;
    components[mark].push_back(s);
    color[s] = grey;
    int sz = Rvt[s].size();
    for(int i=0; i<sz; i++)
    {
        int v = Rvt[s][i];
        if(color[v]==white)
            dfs2(v);
    }
}
int cnt=0;
void check(int s)
{
    ++cnt;
    color[s] = grey;
    int sz = vt[s].size();
    for(int i=0; i<sz; i++)
    {
        int v = vt[s][i];
        if(color[v]==white)
            check(v);
    }
}

int main()
{
    int n,e,u,v,i,j,t,te=0;
    scanf("%d",&t);
    while(t--)
    {
        for(i=0; i<=1000; i++){
            components[i].clear();
            vt[i].clear();
            Rvt[i].clear();
        }
        ++te;
        scanf("%d",&n);
        map<int,int>mp;
        for(j=0; j<n; j++)
        {
            scanf("%d",&e);
            for(i=0; i<e; i++)
            {
                scanf("%d%d",&u,&v);
                vt[u].push_back(v);
                Rvt[v].push_back(u);
                mp[u] = 1,mp[v] = 1;
            }
        }
        cnt = 0;
        for(i=0; i<=1000; i++)
            color[i] = white;
        check(0);
        if(mp.size()!=cnt)
        {
            printf("Case %d: NO\n",te);
            continue;
        }
        for(i=0; i<=1000; i++)
            color[i] = white;
        for(i=0; i<1000; i++)
        {
            if(!color[i])
                dfs(i);
        }
        for(i=0; i<=1000; i++)
            color[i] = white;
        mark = 0;

        while(!stk.empty())
        {
            u = stk.top();
            stk.pop();
            if(color[u]==white)
            {
                mark+=1;
                dfs2(u);
            }
        }
       // cout<<"NEXT"<<endl;
        int c = 0;
        for(int i=1; i<=mark; i++)
        {
            int sz = components[i].size();
            int outDegree = 0;
            for(int j=0; j<sz; j++)
            {
                int node = components[i][j];
                //cout<<i<<" "<<node<<endl;
                int sz2 = vt[node].size();
                for(int k=0; k<sz2; k++)
                {
                    if(grp[vt[node][k]]!=i)
                        outDegree++;
                }
            }
            if(outDegree>=2){
                    c = 1;
                break;}
        }
        if(c)
            printf("Case %d: NO\n",te);
        else
            printf("Case %d: YES\n",te);


    }

}
