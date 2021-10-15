#include<bits/stdc++.h>
using namespace std;
int n;
string s;
 
int binarySearch(int a[],int n,int m)
{
    int i,sm=0,mx=0;
    for(i=0; i<n; i++)
    {
        mx = max(mx,a[i]);
        sm+=a[i];
    }
    int ans = 999999999;
    int lo=mx, hi=sm;
    while(lo<=hi)
    {
        sm = 0;
        int mid = (lo+hi)/2;
        int cnt = 1;
        for(i=0; i<n; i++)
        {
            sm+=a[i];
            if(sm>mid)
            {
                sm = a[i];
                cnt++;
            }
        }
        if(cnt>m)
            lo = mid+1;
        else
        {
            ans = min(ans,mid);
            hi = mid-1;
        }
    }
    return ans;
}
 
int main()
{
    int t,n,m,i;
    scanf("%d",&t);
    for(int tc=1; tc<=t; tc++)
    {
        scanf("%d%d",&n,&m);
        int a[n+2];
        for(i=0;i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Case %d: %d\n",tc,binarySearch(a,n,m));
    }
}
 