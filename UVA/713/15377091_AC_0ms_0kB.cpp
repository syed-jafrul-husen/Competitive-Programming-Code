#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,i,j,k,m,n,f,x,m1,m2,c;
    string s,s2,s4="",s3="";
    cin>>t;
    for(i=0; i<t; i++)
    {
        k =  0;
        s = "";
        s2="";
        cin>>s3>>s4;
        n = s3.size();
        m = s4.size();
        if(n<m)
        {
            x = m-n;
            for(j=0; j<x; j++)
                s =s+ "0";
        }
        else
        {
            x = n-m;
            for(j=0; j<x; j++)
                s2 = s2+"0";
        }
        for(j=n-1; j>=0; j--)
        {
            s+=s3[j];
        }
        for(j=m-1; j>=0; j--)
        {
            s2+=s4[j];
        }
        //cout<<s<<" "<<s2<<endl;
        s3="";
        s4="";
        char ch[205];
        n = s.size();
        m2 = 0;
        for(j=n-1; j>=0; j--)
        {
            m = (s[j]-'0' + s2[j]-'0')+m2;
            m1 = m%10;
            m2 = m/10;
            ch[j] = (m1+'0');
            // cout<<m1;
        }
        x = 0;
        if(m2>0)
        {
            //ch[j] = m2+'0';
            k = 1;
            x = 1;
        }
        n = n;
        k = 0;
        c = 0;


        for(j=n-1; j>=0; j--)
        {
            if(ch[j]=='0' && k==0)
                ++c;
            else
            {
                s3+=ch[j];
                k = 1;
            }
        }


        cout<<s3;
        if(x==1)
            cout<<m2;
        cout<<endl;
    }
}
