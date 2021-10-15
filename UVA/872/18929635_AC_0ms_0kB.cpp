#include<bits/stdc++.h>
using namespace std;
vector<int>vt[305];
int start[305],finish[305],color[305];
int white = 0,grey = 1,black = -1,tim=0,cycle;

void topoSort(int u)
{
    ++tim;
    color[u] = grey;
    start[u] = tim;
    int sz = vt[u].size(),i,adj;
    for(i=0; i<sz; i++)
    {
        adj = vt[u][i];
        if(grey==color[u] && grey==color[adj])
            cycle = 1;
        if(color[adj]==white)
            topoSort(adj);
    }
    ++tim;
    finish[u] = tim;
    color[u] = black;
}

int main()
{
    int t,temp,i;
    string s,s2,s3;
    cin>>t;
    getchar();
    while(t--)
    {
        cycle = 0;
        tim = 0;
        s = "";
        getchar();
        getline(cin,s3);
        getline(cin,s2);
        int n = s3.size();
        int test[258]= {0};
        for(i=0; i<n; i++)
        {
            if(s3[i]!=' ' && test[s3[i]-'A']==0)
            {
                s+=s3[i];
                test[s3[i]-'A'] = 1;
            }
        }
        map<char,int>mp;
        map<int,char>mp2;
        int c = 0;
        n = s.size();
        for(i=0; i<n; i++)
        {
            if(mp[s[i]]==0)
            {
                ++c;
                mp[s[i]] = c;
                mp2[c] = s[i];
            }
        }
        int node = c;
        int m=s2.size();
        for(i=0; i<m-2; i+=4)
        {
            int u,v;
            u = mp[s2[i]];
            v = mp[s2[i+2]];

            //cout<<u<<"  "<<v<<endl;
            vt[u].push_back(v);
        }
        string str[20000],Astr[20000];
        int cnt=0,Asz=0;
        str[cnt] = s;
        ++cnt;
        //ssssssssssssssss
        while(next_permutation(s.begin(),s.end()))
        {
            str[cnt] = s;
            ++cnt;
        }
        int j;
        for(j=0; j<cnt; j++)
        {
            memset(start,0,sizeof(start));
            memset(finish,0,sizeof(finish));
            memset(color,0,sizeof(color));
            for(i=0; i<node; i++)
            {
                //cout<<mp[str[j][i]]<<" ";
                if(color[mp[str[j][i]]]==white)
                    topoSort(mp[str[j][i]]);
            }
            if(cycle)
            {
                cout<<"NO"<<endl;
                break;
            }
            vector<pair<int,int> >p;
            for(i=1; i<=node; i++)
            {
                p.push_back(make_pair(finish[i],i));
            }
            sort(p.begin(),p.end());
            string TT="";
            for(i=node-1; i>=0; i--)
            {
                n = p[i].second;
                TT+=mp2[n];
            }
            Astr[j] = TT;
        }
        if(cycle)
            continue;
        sort(Astr,Astr+cnt);
        set<string>st;
        set<string>::iterator it;
        for(j=0; j<cnt; j++)
        {
            st.insert(Astr[j]);
        }
        for(it=st.begin(); it!=st.end(); it++)
        {
            string AA = *it;
            int AAsz = AA.size();
            for(int k=0; k<AAsz; k++)
            {
                cout<<AA[k];
                if(k+1<AAsz)
                    cout<<" ";
            }
            cout<<endl;
        }
        if(t>0)
        cout<<endl;
        for(i=0; i<=node; i++)
            vt[i].clear();
    }

}
