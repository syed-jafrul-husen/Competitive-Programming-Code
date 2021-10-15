#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k,f=0;
    string s;
    cin>>n>>s;
    s = '0'+s+'0';
    for(i=1; i<=n; i++)
    {
        if(s[i-1]=='0' && s[i]=='0' && s[i+1]=='0')
            f = 1;
        else if(s[i]=='1' &&(s[i+1]=='1' || s[i-1]=='1') )
            f = 1;
    }
    if(f==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}
