#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,k,n,c=0,f=0;
        priority_queue<int>pq;
        cin>>n;
        int a[n+2],b[n+2];
        for(i=1; i<=n; i++)
            cin>>a[i];
        for(i=1; i<=n; i++)
        {
            while(c<a[i])
                pq.push(++c);
            if(pq.empty())
                f = 1;
            else
            {
                b[i] = pq.top();
                pq.pop();
            }
        }
        if(f)
            cout<<-1<<endl;
        else
        {
            for(i=1; i<=n; i++)
                cout<<b[i]<<" ";
            cout<<endl;
        }

    }
}
