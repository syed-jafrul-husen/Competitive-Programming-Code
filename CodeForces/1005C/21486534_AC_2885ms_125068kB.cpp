#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    long long n,i,j,k,c=0,t=1,cnt = 0,d;
    scanf("%lld",&n);
    long long a[n];
    map<int,int>mp;
 
    for(i=0; i<n; i++)
    {
       scanf("%lld",&a[i]);
       mp[a[i]]++;
       //cout<<mp[a[i]]<<endl;
    }
    for(i=0; i<n; i++)
    {
        t = 0;
        for(j=0; j<32; j++)
        {
            d = powl(2,j);
            k = d-a[i];
            if(mp[k])
            {
                if(a[i]==k && mp[a[i]]==1)
                    continue;
                t=1;
                break;
            }
        }
        if(!t)
            ++cnt;
    }
    printf("%lld\n",cnt);
}