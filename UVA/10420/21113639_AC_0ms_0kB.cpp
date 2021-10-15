#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t,n,i,j;
    string str,s;

    //scanf("%lld",&n);
    cin>>n;
    getchar();
    map<string,ll>mp;
    map<string,ll>::iterator it;
    while(n--)
    {
        s = "";
        getline(cin,str);
       // cout<<str<<endl;
        ll sz = str.size();
        t = 0;
        for(i=0; i<sz; i++)
        {
            if( (str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') )
            {
                s+=str[i];
                t = 1;
            }
            else if(t==1)
                break;
        }
        ++mp[s];
    }
    for(it=mp.begin(); it!=mp.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

}

