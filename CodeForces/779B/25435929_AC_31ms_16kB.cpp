#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    long long n,i,j,k,num,c=0,c2=0,zero=0;
    cin>>s>>k;
    map<long long,long long>mp;
    n = s.size();
    for(i=n-1; i>=0; i--)
    {
        if(zero==k)
            break;
        if(s[i]=='0')
            ++zero;
        else
        {
            ++c;
            mp[i] = 1;
        }
    }
    string s2 = "";
    for(i=0; i<n; i++)
    {
        if(mp[i]==0)
        {
            s2+=s[i];
        }
    }
    num = 0;
    n = s2.size();
    //cout<<s2<<endl;
    c2 = 1;
    for(i=0; i<n; i++)
    {

        if(s2[i]!='0')
        {
            num = num + powl(10,n-i-1)*(s2[i]-'0');
        }
    }
    //cout<<num<<endl;
    long long x = powl(10,k);
    n = s.size();
    if(num!=0 && num%x==0)
        cout<<min(c,n-1)<<endl;
    else
        cout<<n-1<<endl;


}
