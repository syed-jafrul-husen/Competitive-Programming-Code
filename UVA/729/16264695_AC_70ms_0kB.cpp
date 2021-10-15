#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k,c,t;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n>>k;
        string s;
        for(j=0; j<n-k; j++)
            s+="0";
        for(j=0; j<k; j++)
            s+="1";
        cout<<s<<endl;
        while(next_permutation(s.begin(),s.end()))
            cout<<s<<endl;
        if(i<t-1)
            cout<<endl;
    }
    //cout<<endl;
}
