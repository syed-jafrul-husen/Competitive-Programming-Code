#include<bits/stdc++.h>
using namespace std;

int a[1000],b[1000];

int main()
{
    string s,s2,s3,s4,s5,s6;
    int i,j,k,l,t,n,m;
    cin>>t;
    for(i=0; i<t; i++)
    {
        for(j=0; j<500; j++)
            a[j] = 0;
        for(j=0; j<500; j++)
            b[j] = 0;
        s5 = "";
        s6 = "";
        cin>>s>>s2;
        s3 = s;
        s4 = s2;

        n = s.size();
        m = s2.size();

        for(j=0; j<n; j++)
        {
            if(a[s3[j]]==0)
            {
                s5+=s3[j];
                a[s3[j]] = 1;
            }
        }
        for(j=0; j<m; j++)
        {
            if(b[s4[j]]==0)
            {
                s6+=s4[j];
                b[s4[j]] = 1;
            }
        }

        //cout<<s5<<endl<<s6<<endl;
        map<char,char>mp;
        int        x = s6.size();
        for(j=0; j<x; j++)
        {
            mp[s6[j]] = s5[j];
        }
        n = s2.size();
        for(j=0; j<n; j++)
        {
            s2[j] = mp[s2[j]];
        }
        cout<<s2<<endl;
        if(i<t-1)
        cout<<endl;
    }

}
