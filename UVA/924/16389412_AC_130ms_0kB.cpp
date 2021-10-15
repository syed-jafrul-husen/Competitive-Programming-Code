#include<bits/stdc++.h>
using namespace std;

vector<long long>edge[50000];
long long dis[500000];
long long freq[50000],Max,Depth,node,m;

void Bfs(long long source)
{
    queue<long long>q;
    long long frnt,i,d=0,sz;

    q.push(source);
    while(q.size())
    {
        frnt = q.front();
        q.pop();
         dis[source] = 0;
        sz = edge[frnt].size();
        for(i=0; i<sz; i++)
        {
            long long value = edge[frnt][i];
            if(dis[value]==-1)
            {
                dis[value] = dis[frnt]+1;
                q.push(value);
                freq[dis[value]]++;
            }
        }
        for(i=0; i<node; i++)
        {
            if(freq[i]>Max)
            {
                Max = freq[i];
                Depth = i;
            }
        }
    }
}
int main()
{
    long long n,i,j,k,y,z,q;
    cin>>node;
    for(i=0; i<node; i++)
    {
        cin>>n;
        while(n--)
        {
            cin>>y;
            edge[i].push_back(y);
        }
    }
    cin>>q;
    for(i=0; i<q; i++)
    {
        Max = -1;
        Depth = 0;

        cin>>z;
        if(edge[z].size()==0)
            cout<<0<<endl;
        else
        {
            memset(dis,-1,50000);
            memset(freq,0,50000);
            Bfs(z);
            cout<<Max<<" "<<Depth<<endl;
        }
    }
    return 0;
}
