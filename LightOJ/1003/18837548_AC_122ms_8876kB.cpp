#include<bits/stdc++.h>
using namespace std;

int n,e,visited[200005];

vector<int>vt[200050];
int status[200005];
int flag = 0,v;
int white = 0;
int grey = 1;
int black = -1;
int tt = 0;

void DFS(int s)
{
    status[s] = grey;
    int sz = vt[s].size();
    //visited[s] = 1;
    for(int i=0; i<sz; i++)
    {
        v = vt[s][i];
        if(grey==status[v] && status[s]==grey)
        {
            tt = 1;
        }
        if(status[v]==white)
        {

            DFS(v);
        }
    }
    status[s] = black;
}

int main()
{
    int n,m,u,v,i,e,t,j;
    cin>>t;
    for(j=1; j<=t; j++)
    {
        cin>>e;
        tt=0;
        map<string,int>mp;
        map<string,int>::iterator it;
        string s,s2;
        int c=0;
        for(i=0; i<e; i++)
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
            //cout<< mp[s]<<" "<<mp[s2]<<endl;
            vt[mp[s]].push_back(mp[s2]);
            //cin>>u>>v;
            //vt[u].push_back(v);
        }
        tt= 0;

        n = mp.size();
        int k;
        for(k=0; k<=n; k++)
                status[k] = 0;
        for(i=1; i<=n; i++)
        {

            if(status[i]==0)
                DFS(i);
        }

        for(i=0; i<e+2; i++)
            vt[i].clear();
        if(tt==1)
            printf("Case %d: No\n",j);
        else
            printf("Case %d: Yes\n",j);

    }

}
