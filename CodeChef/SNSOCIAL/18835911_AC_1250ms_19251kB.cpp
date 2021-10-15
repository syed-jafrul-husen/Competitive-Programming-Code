#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[504][504],temp[504][504];
int main()
{
    ll t,n,m,mx,c,i,j,k;
    scanf("%lld",&t);

    while(t--)
    {
        mx =0,c=0;
        scanf("%lld%lld",&n,&m);
        for(i=0; i<n; i++)
            for(j=0; j<m; j++)
                 scanf("%lld",&a[i][j]);
         mx=0;
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(a[i][j]>mx)
                    mx = a[i][j];
            }
        }
        while(1)
        {
            for(i=0; i<n; i++)
                for(j=0; j<m; j++)
                    temp[i][j]=0;
            ll cng=0;
            for(i=0; i<n; i++)
            {
                for(j=0; j<m; j++)
                {
                    if(temp[i][j]==0 && a[i][j]==mx)
                    {
                        temp[i][j] = 1;
                        if(i+1<n && a[i+1][j]<mx && temp[i+1][j]==0)
                        {
                            a[i+1][j] = mx;
                            temp[i+1][j] = 1;
                            cng=1;
                        }
                        if(i-1>=0 && a[i-1][j]<mx && temp[i-1][j]==0)
                        {
                            a[i-1][j] = mx;
                            temp[i-1][j] = 1;
                            cng=1;
                        }
                        if(j+1<m && a[i][j+1]<mx && temp[i][j+1]==0)
                        {
                            a[i][j+1] = mx;
                            temp[i][j+1] = 1;
                            cng=1;
                        }
                        if(j-1>=0 && a[i][j-1]<mx && temp[i][j-1]==0)
                        {
                            a[i][j-1] = mx;
                            temp[i][j-1] = 1;
                            cng=1;
                        }
                        if(i-1>=0 && j-1>=0 && a[i-1][j-1]<mx && temp[i-1][j-1]==0)
                        {
                            a[i-1][j-1] = mx;
                            temp[i-1][j-1] = 1;
                            cng=1;
                        }
                        if(i+1<n && j+1<m && a[i+1][j+1]<mx && temp[i+1][j+1]==0)
                        {
                            a[i+1][j+1] = mx;
                            temp[i+1][j+1] = 1;
                            cng=1;
                        }
                        if(i-1>=0 && j+1<m && a[i-1][j+1]<mx && temp[i-1][j+1]==0)
                        {
                            a[i-1][j+1] = mx;
                            temp[i-1][j+1] = 1;
                            cng=1;
                        }
                        if(i+1<n && j-1>=0 && a[i+1][j-1]<mx && temp[i+1][j-1]==0)
                        {
                            a[i+1][j-1] = mx;
                            temp[i+1][j-1] = 1;
                            cng=1;
                        }

                    }
                }
            }
            //cout<<cng<<endl;
            if(cng==1)
                c++;
            ll   flag=1;
            for(i=0; i<n; i++)
            {
                for(j=0; j<m; j++)
                {
                    if(temp[i][j] == 0)
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag==0)
                    break;
            }
            if(flag)
                break;
        }
        cout<<c<<endl;
    }
    return 0;
}
