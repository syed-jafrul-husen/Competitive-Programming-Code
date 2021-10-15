#include<bits/stdc++.h>
using namespace std;

int main()
{
    int u,v,q,t,i,j,k,x1,x2,x3,x4,y1,y2,y3,y4;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>x1>>y1>>x2>>y2;
        cout<<"Case "<<i+1<<":"<<endl;
        cin>>q;
        for(j=0; j<q; j++)
        {
            cin>>u>>v;
            if(u>x1 && u<x2 && v>y1 && v<y2)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }

    }
}
