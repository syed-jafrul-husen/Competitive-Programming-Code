#include<bits/stdc++.h>
using namespace std;
int hexadecimalToDecimal(string str)
{
    int len = str.size();
    int base = 1;
    int dec_val = 0;
    for (int i=len-1; i>=0; i--)
    {
        if (str[i]>='0' && str[i]<='9')
        {
            dec_val += (str[i] - 48)*base;
            base = base * 16;
        }
        else if (str[i]>='A' && str[i]<='F')
        {
            dec_val += (str[i] - 55)*base;
            base = base*16;
        }
    }

    return dec_val;
}
int main()
{
    string s,s2,s3;
    int n,m,i,j,sz,t,a,b,sn=0,k;
    cin>>t;
    getchar();
    for(k=0; k<t; k++)
    {
        //cout<<i<<" "<<t<<endl;
        s2="",s3="";
        sn = 0;
        //getchar();
        getline(cin,s);
        //cout<<s<<endl;
        n = s.size();
        m = 0;
        for(j=0; j<n; j++)
        {
            if( m==0 && ( (s[j]>='A' && s[j]<='Z') || (s[j]>='0' && s[j]<='9')) )
            {
                s2+=s[j];
            }
            if(s[j]=='+' || s[j]=='-')
                m = 1;
            if(s[j]=='-')
                sn = 1;
            if(m==1 && ( (s[j]>='A' && s[j]<='Z') || (s[j]>='0' && s[j]<='9')) )
            {
                s3+=s[j];
            }
        }

        //cout<<s2<<endl<<s3<<endl;

        a =  hexadecimalToDecimal(s2);
        b =  hexadecimalToDecimal(s3);
        //cout<<a<<endl;
        //cout<<b<<endl;
        if(sn==1)
            n = a-b;
        else
            n = a+b;
        s2 = bitset<16>(a).to_string();
        s3 = bitset<16>(b).to_string();
        m = 12;
       // cout<<s2<<endl<<s3<<endl;
        for(j=3; j<16; j++)
        {
            cout<<s2[j];
        }
        cout<<" ";
        if(sn==1)
            cout<<"- ";
        else
            cout<<"+ ";
        m = 12;
        for(j=3; j<16; j++)
        {
            cout<<s3[j];
        }
        cout<<" = "<<n<<endl;

    }
}
