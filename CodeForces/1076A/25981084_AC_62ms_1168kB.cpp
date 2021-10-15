#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k=0;
    string s,s2="",str[3];
    cin>>n>>s;
    char ch=s[0];
    str[0] = s;
    for(i=0; i<n-1; i++)
    {
        if(s[i]>s[i+1])
        {
            ch = s[i];
            k = i;
            break;
        }
    }
    for(i=0; i<n; i++)
    {
        if(i==k)
            continue;
        s2+=s[i];
    }
    str[1] = s2;

    s2 = "";
    ch = s[0];
    k = 0;
    for(i=0; i<n; i++)
    {
        if(s[i]>ch)
        {
            ch = s[i];
            k = i;
        }
    }
    for(i=0; i<n; i++)
    {
        if(i==k)
            continue;
        s2+=s[i];
    }

    str[2] = s2;
    //cout<<str[0]<<" 1 "<<str[1]<<" 2 "<<str[2]<<endl;
    sort(str,str+3);
    cout<<str[0]<<endl;
}
