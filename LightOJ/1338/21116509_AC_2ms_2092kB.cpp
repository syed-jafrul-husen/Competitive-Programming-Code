#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t,n,i,j,te=0;
    string a,b,c,d;

    //scanf("%lld",&n);
    cin>>n;
    getchar();
    while(n--)
    {
        ++te;
        c = "";
        d = "";
        ll arr[29],arr2[29];
        for(i=0; i<=26; i++)
        {
            arr[i] = 0;
            arr2[i] = 0;
        }
       // getchar();
        getline(cin,a);
       // getchar();
        getline(cin,b);
        ll sz,sz2;
        sz = a.size();
        sz2 = b.size();
        for(i=0; i<sz; i++)
        {
            if( (a[i]>='a'&&a[i]<='z') || (a[i]>='A'&&a[i]<='Z') )
            {
                c+=a[i];
            }
        }
        for(i=0; i<sz2; i++)
        {
            if( (b[i]>='a'&&b[i]<='z') || (b[i]>='A'&&b[i]<='Z') )
            {
                d+=b[i];
            }
        }
        transform(c.begin(),c.end(),c.begin(),::tolower);
        transform(d.begin(),d.end(),d.begin(),::tolower);
        sort(c.begin(),c.end());
        sort(d.begin(),d.end());
        sz = c.size();
        sz2 = d.size();
        for(i=0; i<sz; i++)
        {
            ++arr[c[i]-'a'];
        }
        for(i=0; i<sz2; i++)
        {
            ++arr2[d[i]-'a'];
        }
        ll ans = 1;
        for(i=0; i<=26; i++)
        {
            if(arr[i]<=arr2[i])
            {

            }
            else
                ans = 0;
        }
        if(ans)
        {
            printf("Case %lld: Yes\n",te);
            continue;
        }
        ans = 1;
        for(i=0; i<=26; i++)
        {
            if(arr2[i]<=arr[i])
            {

            }
            else
                ans = 0;
        }
        if(ans)
        {
            printf("Case %lld: Yes\n",te);
            continue;
        }
        printf("Case %lld: No\n",te);
    }

}
