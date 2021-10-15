#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k,x,y;
    vector<pair<int,int> >vt;
    vector<pair<int,int> >vt2;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x>>y;
        if(y>0)
            vt.push_back(make_pair(x,x+y));
        else if(y<0)
            vt2.push_back(make_pair(x,x+y));
    }
    int sz = vt.size(), sz2 = vt2.size(),f=0;
    for(i=0; i<sz; i++)
    {
        for(j=0; j<sz; j++)
        {
            if(vt[i].first==vt2[j].second && vt[i].second==vt2[j].first)
                f = 1;
        }
    }
    if(f)
        printf("YES\n");
    else
        printf("NO\n");

}
