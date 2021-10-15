#include<bits/stdc++.h>
using namespace std;
string s22[1000000];
int ar[1000000],br[100000];
int main()
{
    int n,z1=0,z2=0,z3=0,kk=0,temp=0;
    while(cin>>n)
    {
        ++temp;
        string st;
        getchar();
        getline(cin,st);
        br[z3] = n;
        ++z3;
        //getchar();
        //cout<<st<<endl;;
        string s[100],s2="";
        int m,i,k=0,j,x,y,t;
        m = st.size();
        for(i=0; i<m; i++)
        {
            if(st[i]!=' ')
                s2+=st[i];
            else
            {
                s[k] = s2;
                //cout<<s[k];
                ++k;
                s2 = "";
            }
            if(i==m-1)
            {
                s[k] = s2;
                ++k;
            }
        }
        map<string,int>mp;
        map<string,int>::iterator it;

        for(i=0; i<k; i++)
            mp[s[i]] = 0;

        //cout<<s[i]<<endl;
        for(i=0; i<n; i++)
        {
            cin>>s2>>x>>y;
            //cout<<s2<<x<<y<<endl;
            getchar();
            if(y!=0){
                t = x%y+mp[s2]-x;
            mp[s2] = t;}
            if(y!=0)
                t = x/y;
            for(j=0; j<y; j++)
            {
                cin>>s2;
                //cout<<s2<<endl;
                getchar();
                mp[s2] = mp[s2]+t;
               // cout<<" s2 =   "<<s2<<"  "<<mp[s2]<<endl;

            }//cout<<mp.size()<<endl;
        }
        for(i=0; i<k; i++)
        {
            for(it = mp.begin(); it!=mp.end(); ++it)
            {
                if(s[i]==it->first)
                {
                    s22[z1] = it->first;
                    ar[z1] = it->second;
                    ++z1;
                }
                    //cout<<it->first<<" "<<it->second<<endl;
            }
        }
        //cout<<endl;
        
    }
    for(int i=0; i<z1; i++)
    {
        cout<<s22[i]<<" "<<ar[i]<<endl;
        ++z2;
        if(br[kk]==z2 && i!=z1-1)
        {
            cout<<endl;
            z2 = 0;
            ++kk;
        }
    }

}
