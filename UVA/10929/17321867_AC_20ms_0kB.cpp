#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,st;
    int n,m;
    while(1)
    {
       cin>>s;
       if(s=="0")
        break;
        int r;
        n = 11;
        r = 0;
        for(int i=0; i<s.size(); i++)
        {
            r = r*10 + (s[i]-'0');
            r = r%n;
        }
        if(r==0)
            cout<<s<<" is a multiple of 11."<<endl;
        else
            cout<<s<<" is not a multiple of 11."<<endl;
        //cout<<m%n<<endl<<endl;

    }


    return 0;
}
