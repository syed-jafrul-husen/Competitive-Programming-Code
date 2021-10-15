#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[9000006];


int main()
{
    int n,i,j,k,l;
    string s,s2,s3;
    while(cin>>s)
    {
        s2 = s;
        s3 = s;
        reverse(s2.begin(),s2.end());
        n = s.size();
        int ispal = 1,ismirr=1;
        for(i=0; i<n; i++)
        {
            if(s[i]=='A')
                s3[i] = 'A';
            else if(s[i]=='E')
                s3[i] = '3';
            else if(s[i]=='H')
                s3[i] = 'H';
            else if(s[i]=='I')
                s3[i] = 'I';
            else if(s[i]=='J')
                s3[i] = 'L';
            else if(s[i]=='L')
                s3[i] = 'J';
            else if(s[i]=='M')
                s3[i] = 'M';
            else if(s[i]=='O')
                s3[i] = 'O';
            else if(s[i]=='S')
                s3[i] = '2';
            else if(s[i]=='T')
                s3[i] = 'T';
            else if(s[i]=='U')
                s3[i] = 'U';
            else if(s[i]=='V')
                s3[i] = 'V';
            else if(s[i]=='W')
                s3[i] = 'W';
            else if(s[i]=='X')
                s3[i] = 'X';
            else if(s[i]=='Y')
                s3[i] = 'Y';
            else if(s[i]=='Z')
                s3[i] = '5';
            else if(s[i]=='1')
                s3[i] = '1';
            else if(s[i]=='2')
                s3[i] = 'S';
            else if(s[i]=='3')
                s3[i] = 'E';
            else if(s[i]=='5')
                s3[i] = 'Z';
            else if(s[i]=='8')
                s3[i] = '8';
            else
                ismirr = 0;
        }
        if(s3!=s2)
            ismirr = 0;
        if(s2!=s)
            ispal = 0;
        if(ismirr==0 && ispal==0)
            cout<<s<<" -- is not a palindrome."<<endl;
        else if(ispal==1 && ismirr==0)
            cout<<s<<" -- is a regular palindrome."<<endl;
        else if(ispal==0 && ismirr==1)
            cout<<s<<" -- is a mirrored string."<<endl;
        else if(ispal==1 && ismirr==1)
            cout<<s<<" -- is a mirrored palindrome."<<endl;
        cout<<endl;

    }
}

