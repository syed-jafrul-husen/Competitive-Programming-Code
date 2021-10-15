#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,i,a=0,b=0,c=0,t;

    string s;
    cin>>s;
    n = s.size();
    for(i=0; i<n; i++)
    {
        if(s[i]=='4')
            ++a;
        else if(s[i]=='7')
            ++b;
        else
            ++c;
    }
    //cout<<a<<b<<c<<endl;
    if(a>0 || b>0)
    {
        if(a>=b)
            cout<<"4"<<endl;
        else
            cout<<"7"<<endl;
    }
    else
        cout<<"-1"<<endl;
    return 0;
}
