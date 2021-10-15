#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[28],b,c,n,m,q,i,j,k;
    string s,t,p;
    cin>>q;
    while(q--)
    {
        for(i=0; i<=26; i++)
        {
            a[i] = 0;
        }
        cin>>s>>t>>p;
        n = t.size();
        for(i=0; i<n; i++)
        {
            ++a[t[i]-'a'];
        }
        m = s.size();
        int ans= 1;
        k = 0;
        for(i=0; i<m; i++)
        {
            int x = 0;
            for(j=k; j<n; j++)
            {
                if(s[i]==t[j])
                {
                    k = j+1;
                    x = 1;
                    --a[t[j]-'a'];
                    break;
                }
            }
            if(x==0)
            {
                ans = 0;
                break;
            }
        }
        n = p.size();
        for(i=0; i<n; i++)
        {
            --a[p[i]-'a'];
        }
        for(i=0; i<=26; i++)
            if(a[i]>0)
                ans = 0;
        if(ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

}
