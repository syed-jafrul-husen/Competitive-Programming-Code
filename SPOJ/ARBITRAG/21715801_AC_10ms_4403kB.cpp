#include<bits/stdc++.h>
using namespace std;

#define ll long long
map<string,ll>mp;
double arbitage[300][300];

void floyedWorshel(ll n)
{
    ll i,j,k;
    for(k=0; k<n; k++)
    {
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(arbitage[i][k]*arbitage[k][j]>arbitage[i][j])
                    arbitage[i][j] = arbitage[i][k]*arbitage[k][j];
            }
        }
    }
}

int main()
{
    ll n,m,i,j,x,y,te=0;
    string s,s2;
    double cost;
    while(1)
    {
        ++te;
        mp.clear();
        cin>>n;
        if(n==0)
            break;
        for(i=0; i<n; i++)
        {
            cin>>s;
            mp[s] = i;
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                arbitage[i][j] = 0.0;
            }
        }
        cin>>m;
        for(i=0; i<m; i++)
        {
            cin>>s>>cost>>s2;
            x = mp.find(s)->second;
            y = mp.find(s2)->second;
            arbitage[x][y] = cost;
        }
        floyedWorshel(n);
        ll flag = 1;
        cout<<"Case "<<te<<": ";
        for(i=0; i<n; i++)
        {
            if(arbitage[i][i]>1.0)
            {
                cout<<"Yes"<<endl;
                flag = 0;
                break;
            }
        }
        if(flag)
            cout<<"No"<<endl;
    }

}
