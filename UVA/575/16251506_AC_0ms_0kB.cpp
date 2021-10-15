#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n,i,j,k,l;
    while(1)
    {
        cin>>s;
        if(s=="0")
            break;
        int len,dec=0,power;
        len = s.size();
        power = len;
        for(i=0; i<len; i++)
        {
            dec = dec + (s[i]-'0')*((powl(2,power))-1);
            --power;
        }
        cout<<dec<<endl;
    }
}
