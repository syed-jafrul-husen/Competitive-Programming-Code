#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,t,i,j,k,l;
    string s;
    cin>>n>>t;
    cin>>s;
    for(i=0; i<t && i<n; i++)
    {

        for(j=0; j<n-1; j++)
        {
            if(s[j]=='B' && s[j+1]=='G')
            {
                swap(s[j],s[j+1]);
                ++j;
            }

        }
        //cout<<s<<endl;

    }
    cout<<s<<endl;
}

