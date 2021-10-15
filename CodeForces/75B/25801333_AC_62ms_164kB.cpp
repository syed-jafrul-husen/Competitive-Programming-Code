#include<bits/stdc++.h>
using namespace std;

#define ll long long

struct db
{
    string name;
    ll point;
};

db ar[200];
bool cmp(db x,db y)
{
    if(x.point!=y.point)
        return x.point>y.point;
    if(x.point==y.point)
        return x.name<y.name;
    return true;
}

int main()
{
    string s,s2,s3,my,str;
    map<string,ll>mp;
    map<string,ll>::iterator it;
    ll n,i,j,k;
    cin>>my;
    cin>>n;
    getchar();
    while(n--)
    {
        getline(cin,str);
        ll sz = str.size();
        ll c = 0;
        string temp="";
        for(i=0; i<sz; i++)
        {
            if(str[i]==' ')
                ++c;
            else
            {
                temp+=str[i];
            }
            if(c==1 && str[i]==' ')
            {
                s = temp;
                temp = "";
            }
            else if(c==2 && str[i]==' ')
            {
                s2 = temp;
                temp = "";
            }
            else if(c==3 && s2=="likes" && str[i]==' ')
            {
                s3 = temp;
                break;
            }
            else if(c==3 && str[i]==' ')
                temp = "";
            else if(c==4)
            {
                s3 = temp;
                break;
            }
        }
        string s4="";
        sz = s3.size();
        for(i=0; i<sz-2; i++)
            s4+=s3[i];
        s3 = s4;
        //cout<<s<<" "<<s2<<" "<<s3<<endl;
        if(s2=="posted")
        {
            ll score = 15;
            if(s!=my && s3!=my)
                score = 0;
            if(s!=my)
                mp[s]+=score;
            if(s3!=my)
                mp[s3]+=score;
        }
        else if(s2=="commented")
        {

            ll score = 10;
            if(s!=my && s3!=my)
                score = 0;
            if(s!=my)
                mp[s]+=score;
            if(s3!=my)
                mp[s3]+=score;
        }
        else if(s2=="likes")
        {
            ll score = 5;
            if(s!=my && s3!=my)
                score = 0;
            if(s!=my)
                mp[s]+=score;
            if(s3!=my)
                mp[s3]+=score;
        }
    }
    n = 0;
    for(it=mp.begin(); it!=mp.end(); it++)
    {
        ar[n].name = it->first;
        ar[n].point = it->second;
        ++n;
    }
    sort(ar,ar+n,cmp);
    for(i=0; i<n; i++)
    {
        if(ar[i].name!=my)
            cout<<ar[i].name<<endl;
    }
}
