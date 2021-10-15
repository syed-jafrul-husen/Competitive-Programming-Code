#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,k;
        cin>>n;

        map<int,int>mp;
        map<int,int>::iterator it;
        for(i=1; i<=n; i++)
            mp[i] = 1;
        int a[n+2];
        for(i=0; i<n; i++)
            cin>>a[i];
        vector<int>vt;
        for(i=0; i<n; i++)
        {
            //cout<<a[i]<<endl;
            //for(it=mp.begin(); it!=mp.end(); it++)
              //  cout<<it->first<<" "<<it->second<<endl;
            //cout<<endl;
            if(mp[ a[i] ]==1)
            {
                //cout<<mp[a[i]] <<" a "<<endl;
                //mp[ a[i] ] = 0;
                it = mp.find(a[i]);
                mp.erase(it);
                vt.push_back(a[i]);
            }
            else
            {
                //cout<<mp[a[i]] <<" b "<<endl;
                it = mp.begin();
                //cout<<it->first<<" "<<it->second<<endl;
                vt.push_back(it->first);
                mp[a[i]] = 0;
                mp.erase(it);
                it = mp.find(a[i]);
                if(it!=mp.end())
                    mp.erase(it);
            }
            //for(it=mp.begin(); it!=mp.end(); it++)
              //  cout<<it->first<<" "<<it->second<<endl;
            //cout<<endl;
            //cout<<endl;
        }
        //cout<<mp.size()<<" ";
        if(mp.size()>0)
        {
            cout<<-1<<endl;
            continue;
        }
        for(i=0; i<n; i++)
            cout<<vt[i]<<" ";
        cout<<endl;
    }

}
