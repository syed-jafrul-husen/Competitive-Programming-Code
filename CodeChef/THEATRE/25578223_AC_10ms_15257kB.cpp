#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,i,j,k,n,ans=0,y;
    char ch;
    vector<ll>table[4];
    ll price[4] = {25,50,75,100};
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            table[i].push_back(0);
        }
    }
    cin>>t;
    while(t--)
    {
        for(i=0; i<4; i++)
            for(j=0; j<4; j++)
                table[i][j] = 0;
        cin>>n;
        while(n--)
        {
            cin>>ch>>k;
            k = (k/3)-1;
            ++table[ch-'A'][k];
        }
        ll mx = -400;
        ll waw[4] = {0};
        for(i=0; i<4; i++)
        {
            memset(waw,0,sizeof(waw));
            for(j=0; j<4; j++)
            {
                if(i==j)
                    continue;
                for(k=0; k<4; k++)
                {
                    if(k==i || k==j)
                        continue;
                    for(ll x=0; x<4; x++)
                    {
                        if(x==i || x==j || x==k)
                            continue;
                        waw[0] = table[i][0];
                        waw[1] = table[j][1];
                        waw[2] = table[k][2];
                        waw[3] = table[x][3];
                        sort(waw,waw+4);
                        ll sm = 0;
                        for(y=0; y<4; y++)
                        {
                            if(waw[y]==0)
                               sm-=100;
                            else
                                sm = sm + waw[y]*price[y];
                        }
                        mx = max(mx,sm);
                    }
                }
            }
        }
        cout<<mx<<endl;
        ans+=mx;
    }
    cout<<ans;
}
