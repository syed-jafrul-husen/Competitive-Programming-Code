#include<bits/stdc++.h>
using namespace std;
 
int ans = 0;
vector<int>vt[100005];
int status[100005];
int white=0,grey=1,black=-1;
 
void DFS(int s)
{
    status[s] = grey;
    int sz = vt[s].size();
    int i;
    for(i=0; i<sz; i++)
    {
        int v = vt[s][i];
        if(grey==status[v] && status[s]==grey)
            ans = 1;
        if(status[v]==white)
            DFS(v);
    }
    status[s] = black;
}
 
 
int main()
{
    int n,m,u,v,e,t,i,j,k;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&e);
        int c = 0;
        string s,s2;
        map<string,int>mp;
        map<string,int>::iterator it;
        for(j=0; j<e; j++)
        {
            cin>>s>>s2;
            if(mp[s]==0)
            {
                ++c;
                mp[s] = c;
            }
            if(mp[s2]==0)
            {
                ++c;
                mp[s2] = c;
            }
            vt[mp[s]].push_back(mp[s2]);
        }
        ans = 0;
        n = mp.size();
        for(k=0; k<=n; k++)
            status[k] = 0;
        for(j=1; j<=n; j++)
        {
            if(status[j]==0)
                DFS(j);
        }
        for(j=0; j<e+2; j++)
            vt[j].clear();
        if(ans==1)
            printf("Case %d: No\n",i);
        else
          printf("Case %d: Yes\n",i);
    }
 
}