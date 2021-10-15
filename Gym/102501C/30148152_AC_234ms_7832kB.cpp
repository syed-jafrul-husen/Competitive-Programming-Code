#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll a[1000002];

int main()
{
    ll i,j,k,c=0,cnt=0,n,m,t,tc;
    scanf("%lld",&n);
    char s[1000];

    for(i=0; i<n; i++)
    {
        scanf("%s",s);
        k = strlen(s);
        if(k<7 && s[0]!='-')
        {
            ll x = 0;
            x = atoi(s);
            a[x] = 1;
            //cout<<x<<endl;
        }
    }
    for(i=0; i<=1000000; i++)
    {
        if(a[i]==0)
        {
            printf("%d\n",i);
            break;
        }
    }
}
