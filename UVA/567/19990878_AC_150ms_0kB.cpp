#include<bits/stdc++.h>
using namespace std;
int c;
vector<int>vt[500005];
int visited[500005];
int par[500005],level[500005];
vector<int>ans;

void bfs(int s)
{
    int frnt,i,sz;
    queue<int>q;
    q.push(s);
    level[s] = 0;
    visited[s] = true;
    while(!q.empty())
    {
        frnt = q.front();
        q.pop();
        sz = vt[frnt].size();
        for(i=0; i<sz; i++)
        {
            if(!visited[vt[frnt][i]])
            {
                level[vt[frnt][i]] = level[frnt]+1;
                q.push(vt[frnt][i]);
                visited[vt[frnt][i]] = true;
                par[vt[frnt][i]] = frnt;
            }
        }
    }
}


int main()
{

    //freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int t,i,j,k,l,n;
    int cnt=0;
    while(cin>>n)
    {
        ++cnt;
        //if(cnt>1)
          //  cout<<endl;
        for(i=0; i<n; i++)
        {
            cin>>t;
            vt[1].push_back(t);
            vt[t].push_back(1);
        }
        for(i=2; i<=19; i++)
        {
            cin>>n;
            for(j=0; j<n; j++)
            {
                cin>>t;
                vt[i].push_back(t);
                vt[t].push_back(i);
            }
        }
        cout<<"Test Set #"<<cnt<<endl;
        cin>>n;
        for(i=0; i<n; i++)
        {
            int u,v;
            cin>>u>>v;
            bfs(u);
            if(u<10)
                cout<<" "<<u;
            else
                cout<<u;
            cout<<" to ";
            if(v<10)
                cout<<" "<<v;
            else
                cout<<v;
            cout<<": "<<level[v]<<endl;

            for(j=0; j<=100; j++)
            {
                visited[j] = 0;
                level[j] = 0;
            }
        }

        for(j=1; j<=100; j++)
            vt[j].clear();
        cout<<endl;
    }
}
