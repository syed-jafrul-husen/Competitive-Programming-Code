#include<bits/stdc++.h>
using namespace std;

int a[1000000],n,i,c=0;
string str[10000000];
int main()
{
    string s,s2;
    while(cin>>s)
    {
        n = s.size();
        str[c] = s;
        //++c;
        s2 = s;
        int mir = 1,m=n-1,pal = 0;
        for(i=0; i<n/2; i++)
        {
            if( (s[i]==s[m])&& (s[i]=='A' || s[i]=='H' || s[i]=='I' || s[i]=='M' || s[i]=='O' || s[i]=='T' || s[i]=='U' || s[i]=='V' || s[i]=='W' || s[i]=='X' || s[i]=='Y' || s[i]=='1' || s[i]=='8') )
            {

            }
            else if( (s[i]=='3' && s[m]=='E') || (s[i]=='E' && s[m]=='3') )
            {

            }
            else if( (s[i]=='J' && s[m]=='L') || (s[i]=='L' && s[m]=='J') )
            {

            }
            else if( (s[i]=='S' && s[m]=='2') || (s[i]=='2' && s[m]=='S') )
            {

            }
            else if( (s[i]=='Z' && s[m]=='5') || (s[i]=='5' && s[m]=='Z') )
            {

            }
            else if( (s[i]=='0' && s[m]=='O') || (s[i]=='O' && s[m]=='0') )
            {

            }

            else
                mir = 0;
            --m;
        }
        if(n%2==1)
        {
            i = n/2;
            if( ( s[i]=='0' || s[i]=='A' || s[i]=='H' || s[i]=='I' || s[i]=='M' || s[i]=='O' || s[i]=='T' || s[i]=='U' || s[i]=='V' || s[i]=='W' || s[i]=='X' || s[i]=='Y' || s[i]=='1' || s[i]=='8' || s[i]=='0') )
            {

            }
            else
                mir = 0;
        }
        s2 = "";
        for(i=n-1; i>=0; i--)
            s2+=s[i];
        if(s==s2)
            pal = 1;
        if(pal==0 && mir==0)
            cout<<s<<" -- is not a palindrome."<<endl;
        else if(pal==1 && mir==0)
            cout<<s<<" -- is a regular palindrome."<<endl;
        else if(pal==0 && mir==1)
            cout<<s<<" -- is a mirrored string."<<endl;
        else if(pal==1 && mir==1)
            cout<<s<<" -- is a mirrored palindrome."<<endl;
        //cout<<s<<" -- is a mirrored palindrome."<<endl;
        ++c;
        cout<<endl;
    }
}
