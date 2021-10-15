#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,i,j,k,a,b;
    string s,s2;
    while(cin>>s)
    {
        vector<int>vt;
        ll sz = s.size();
        for(i=0; i<sz; i++)
        {
            vt.push_back(s[i]-'0');
        }
        sort(vt.begin(), vt.end());
        k = 1;
        b = 0;
        for(i=sz-1; i>=0; i--)
        {
            b = (b*k)+vt[i];
            k = 10;
        }
        if(vt[0]==0)
        {
            k = 0;
            for(i=1; i<sz; i++)
            {
                if(vt[i]!=0)
                {
                    k = i;
                    break;
                }
            }
            swap(vt[0],vt[k]);
        }
        k = 1;
        a = 0;
        for(i=0; i<sz; i++)
        {
            a = (a*k)+vt[i];
            k = 10;
        }


        printf("%lld - %lld = %lld = 9 * %lld\n",b,a,b-a,(b-a)/9);
    }
}
