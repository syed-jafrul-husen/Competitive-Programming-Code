#include<bits/stdc++.h>
using namespace std;

long long i,j,k,a,b,c,t;
string s,s2,s3,s4="",str;
int main()
{
    cin>>t;
    for(i=0; i<t; i++)
    {
        s4 = "";
        cin>>s>>s2;
        s3="";
        s3 = s2.substr(0,8);
        unsigned long n = std::bitset<8>(s3).to_ulong();
        stringstream ss;
        str = "";
        ss<<n;
        str = ss.str();
        s4 = s4+str;
        s4 = s4+".";

        s3 = "";
        s3 = s2.substr(9,8);
        n = std::bitset<8>(s3).to_ulong();
        stringstream ss2;
        ss2<<n;
        str = "";
        str = ss2.str();
        s4 = s4+str;
        s4 = s4+".";

        s3 = "";
        s3 = s2.substr(18,8);
        n = std::bitset<8>(s3).to_ulong();
        stringstream ss3;
        ss3<<n;
        str = "";
        str = ss3.str();
        s4 = s4+str;
        s4 = s4+".";

        s3 = "";
        s3 = s2.substr(27,8);
        n = std::bitset<8>(s3).to_ulong();
        stringstream ss4;
        ss4<<n;
        str = "";
        str = ss4.str();
        s4 = s4+str;
        //cout<<s4<<endl;
        if(s4==s)
            cout<<"Case "<<i+1<<": Yes"<<endl;
        else
            cout<<"Case "<<i+1<<": No"<<endl;

    }
}
