#include<bits/stdc++.h>
using namespace std;

#define ll long long

vector<string>vt;
map<string,ll>level;

void BFS(string s,string s3)
{
    level[s] = 0;

    queue<string>q;
    q.push(s);

    while(!q.empty() && level[s3]==0)
    {
        string frnt = q.front();
        //cout<<frnt<<endl;
        q.pop();
        ll sz = vt.size();
        ll n = frnt.size(),i,j;
        for(i=0; i<sz; i++)
        {
            if(n!=vt[i].size() || level[vt[i]]!=0)
                continue;
            ll dif = 0;
            for(j=0; j<n; j++)
            {
                if(frnt[j]!=vt[i][j])
                    ++dif;
                if(dif>1)
                    break;
            }
            if(dif==1 && level[vt[i]]==0)
            {
                level[vt[i]] = level[frnt]+1;
                q.push(vt[i]);
            }
        }
    }
}

int main()
{
    ll n,m,i,j,k,t;
    cin>>t;
    getchar();
    while(t--)
    {
        vt.clear();
        string s;
        ll query = 0;
        while( (getline(cin,s)) )
        {
            if(s=="*")
                break;
            vt.push_back(s);
        }
        while((getline(cin,s)))
        {
            n = s.size();
            if(s=="")
                break;
            string s2="",s3="";
            for(i=0; i<n; i++)
            {
                if(s[i]==' ')
                {
                    ++i;
                    break;
                }
                s2+=s[i];
            }
            for(i=i; i<n; i++)
                s3+=s[i];
            level.clear();
            BFS(s2,s3);
            cout<<s2<<" "<<s3<<" "<<level[s3]<<endl;
        }
        if(t>0)
            cout<<endl;
    }

}
