#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,n,i,j;
    cin>>t;
    while(t--)
    {
        string s;
        ll mn=0,cmn=0,cmx=0,rmn=0,rmx=0,c=0,r=0,rmxlen=0,cmxlen=0,rmnlen=0,cmnlen=0;
        cin>>s;
        n = s.size();
        for(i=0; i<n; i++)
        {
            if(s[i]=='W')
                ++c;
            else if(s[i]=='S')
                --c;
            else if(s[i]=='D')
                ++r;
            else if(s[i]=='A')
                --r;
            rmn = min(r,rmn);
            rmx = max(r,rmx);
            cmn = min(c,cmn);
            cmx = max(c,cmx);

            cmxlen = max(cmxlen,cmx-c);
            cmnlen = max(cmnlen,c-cmn);
            rmxlen = max(rmxlen,rmx-r);
            rmnlen = max(rmnlen,r-rmn);
        }
        r = (rmx-rmn+1);
        c = (cmx-cmn+1);
        ll ans = r*c;

        if(cmx-cmn>1 && cmxlen!=cmnlen)
            ans = min(ans,(cmx-cmn)*(rmx-rmn+1));
        if(rmx-rmn>1 && rmxlen!=rmnlen)
            ans = min(ans,(cmx-cmn+1)*(rmx-rmn));
        cout<<ans<<endl;
    }
}
