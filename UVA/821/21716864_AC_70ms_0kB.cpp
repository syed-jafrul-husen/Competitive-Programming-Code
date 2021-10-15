#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 9999999999
ll mat[105][105];

void floyedWorshel()
{
    ll i,j,k;
    for(k=1; k<=100; k++)
    {
        for(i=1; i<=100; i++)
        {
            for(j=1; j<=100; j++)
            {
                if(mat[i][j]>mat[i][k]+mat[k][j])
                    mat[i][j] = mat[i][k]+mat[k][j];
            }
        }
    }
}

int main()
{
    ll n,m,i,j,k,t,te=0;
    while(1)
    {
        ll c = 0;
        for(i=0; i<=105; i++)
        {
            for(j=0; j<=105; j++)
                mat[i][j] = INF;
        }
        cin>>n>>m;
        if(n==0 && m==0)
            break;
        mat[n][m] = 1;
        while(1)
        {
            cin>>n>>m;
            if(n==0 && m==0)
                break;
            mat[n][m] = 1;
        }
        floyedWorshel();
        ll ans = 0;
        for(i=1; i<=100; i++)
        {
            for(j=1; j<=100; j++)
            {
                if(mat[i][j]!=INF)
                {
                    if(i!=j)
                    {
                        ++c;
                        ans = ans+mat[i][j];
                    }
                }
            }
        }
       // cout<<c<<" "<<ans<<endl;
        double d = ans/(c*1.0);
        cout<<"Case "<<++te<<": average length between pages = ";
        printf("%.3lf",d);
        cout<<" clicks"<<endl;
    }
}
