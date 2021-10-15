#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k;
    string s,s2="";
    cin>>s;
    n = s.size();
    for(i=0; i<n; i++)
    {
        if(s[i]=='.')
            s2+="0";
        else if(s[i]=='-' && s[i+1]=='.'){
            s2+="1";
            ++i;}
        else if(s[i]=='-' && s[i+1]=='-'){
            s2+="2";
            ++i;}

    }
    cout<<s2<<endl;
}
