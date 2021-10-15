#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,n,m,c=0,a;
    scanf("%d",&n);
    vector<int>v;
    vector<int>v2;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a);
        v.push_back(a);
    }
    v2 = v;
    sort(v2.begin(),v2.end());
    for(i=0; i<n; i++)
    {
        if(v[i]==v2[i])
            ++c;
    }
    if(c==n)
        return 0;
    while(1)
    {
        c = 0;
        for(i=0; i<n-1; i++)
        {
            if(v[i]>v[i+1]){
                cout<<i+1<<" "<<i+2<<endl;
            swap(v[i],v[i+1]);
            c = 1;}
        }
        if(c==0)
            break;
    }

}
