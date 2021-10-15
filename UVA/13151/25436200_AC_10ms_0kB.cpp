#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll octal(string s)
{
    ll val = 0,i;
    reverse(s.begin(),s.end());
    ll sz = s.size();
    for(i=sz-1; i>=0; i--)
    {
        val = val +( (s[i]-'0')*powl(8,i) );
    }
    return val;
}

ll hexa(string s)
{
    ll val = 0,i;
    reverse(s.begin(),s.end());
    ll sz = s.size();
    for(i=sz-1; i>=0; i--)
    {
        if(s[i]>='0' && s[i]<='9')
            val = val +( (s[i]-'0')*powl(16,i) );
        else
            val = val +( (s[i]-'A'+10)*powl(16,i) );
    }
    return val;
}

int main()
{
    while(1)
    {
        string s="",s2="";
        ll n,num=0,i;
        cin>>s2>>n;
        ll sz = s2.size();
        if(s2=="0" && n==0)
            break;
        if(s2.size()>=2 && s2[0]=='0' && s2[1]=='x')
        {
            for(i=2; i<sz; i++)
            {
                s+=s2[i];
            }
            num = hexa(s);
        }
        else if(s2[0]=='0')
        {
            for(i=1; i<sz; i++)
            {
                s+=s2[i];
            }
            num = octal(s);
        }
        else
        {
            for(i=0; i<sz; i++)
            {
                num = (num*10)+(s2[i]-'0');
            }
        }
        ll cur,c=0;
        while(n--)
        {
            cin>>s>>cur;
            if(s=="i")
            {
                if(num==cur)
                    ++c;
                else
                    num = cur;
                continue;
            }
            if(s[0]=='+')
                ++num;
            else if(s[0]=='-')
                --num;
            if(num==cur)
                ++c;
            else
                num = cur;
            if(s[2]=='+')
                ++num;
            else if(s[2]=='-')
                --num;
        }
        cout<<c<<endl;
    }
}
