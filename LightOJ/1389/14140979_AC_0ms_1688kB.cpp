#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,j,c,k=0;
    cin>>t;
    string s;
    for(j=0; j<t; j++)
    {
        c = 0;
        cin>>n;
        cin>>s;
        if(n==1 && s[0]=='.')
        {
            cout<<"Case "<<j+1<<": "<<"1"<<endl;
            continue;
        }
        for(i=0; i<n; i++)
        {
            if(s[i]=='#')
                continue;
             if(s[i]=='#' && s[i+1]=='#' && s[i+2]=='#' && i<(n-2))
            {
                i = i+2;
               continue;
            }

            else if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.' && i<(n-2))
            {
                ++c;
                ++i;
                ++i;
            }
            else if(s[i]=='.' && s[i+1]=='#' && s[i+2]=='.' && i<(n-2))
            {
                ++i;
                ++i;
                ++c;
            }
            else if(s[i]=='#' && s[i+1]=='.' && s[i+2]=='.' && i<(n-2))
            {
                ++i;
                ++i;
                ++c;
            }
            else if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='#' && i<(n-2))
            {
                ++i;
                ++i;
                ++c;
            }
            else if(s[i]=='#' && s[i+1]=='#' && s[i+2]=='.' && i<(n-2))
            {
                ++i;
                ++i;
                ++c;
            }
            else if(s[i]=='.' && s[i+1]=='#' && s[i+2]=='#' && i<(n-2))
            {
                ++i;
                ++i;
                ++c;
            }
            else if(s[i]=='#' && s[i+1]=='.' && s[i+2]=='.' && i<(n-2))
            {
                ++i;
                ++i;
                ++c;
            }
            else if(s[i]=='#' && s[i+1]=='#' && i<(n-1))
            {
                ++i;
                continue;
            }
            else if(s[i]=='.' && s[i+1]=='.' && i<(n-1))
            {
                ++c;
                ++i;
            }
            else if(s[i]=='.' && s[i+1]=='#' && i<(n-1))
            {
                ++c;
                ++i;
            }
             else if(s[i]=='#' && s[i+1]=='.' && i<(n-1))
            {
                ++c;
                ++i;
            }
            else if(s[i]=='.')
                ++c;
        }
        cout<<"Case "<<j+1<<": "<<c<<endl;
    }
}
