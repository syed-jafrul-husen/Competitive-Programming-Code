#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<set<int> >vt(26);
    int n,i,j,k,cnt,q,type,pos,l,r;
    string s;
    char ch;
    cin>>s;
    int sz = s.size();
    for(i=0; i<sz; i++)
    {
        vt[s[i]-'a'].insert(i+1);
    }

    cin>>q;
    while(q--)
    {
        cin>>type;
        if(type==1)
        {
            cin>>pos>>ch;
            vt[s[pos-1]-'a'].erase(pos);
            s[pos-1] = ch;
            vt[s[pos-1]-'a'].insert(pos);
        }
        else
        {
            cin>>l>>r;
            cnt = 0;
            for(i=0; i<26; i++)
            {
                set<int>::iterator it;
                it = vt[i].lower_bound(l);
                if( it!=vt[i].end() && (*it<=r) )
                    ++cnt;
            }
            cout<<cnt<<endl;
        }
    }
}
