#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,c=0,t=0,k;
    string s;
    cin>>s;
    n = s.size();
    for(i=0; i<n; i++)
    {
        t = 0;
        if(s[i]=='Q')
        {
            for(j=i+1; j<n; j++)
            {
                if(s[j]=='A')
                {
                    for(k=j+1; k<n; k++)
                    {
                        if(s[k]=='Q')
                            ++c;
                    }
                }
            }
        }
    }
    cout<<c<<endl;
}

