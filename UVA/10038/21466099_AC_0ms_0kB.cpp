#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,t,te=0,i;
    while(scanf("%lld",&n)==1)
    {
        long long a[n+2],ans[3003];
        for(i=0; i<=3000; i++)
            ans[i] = 0;
        for(i=0; i<n; i++)
            scanf("%lld",&a[i]);
        for(i=1; i<n; i++)
        {
            if(a[i]>=0 && a[i-1]>=0) t = abs(a[i]-a[i-1]);
            else if(a[i]<0 && a[i-1]<0) t = abs(a[i]-a[i-1]);
            else
            {
                t = abs(a[i])+abs(a[i-1]);
            }
            if(t<=n)
                ans[t] = 1;
        }
        te = 1;
        for(i=1; i<n; i++)
        {
            if(ans[i]==0)
            {
                te = 0;
                break;
            }
        }
        if(te)
            printf("Jolly\n");
        else
            printf("Not jolly\n");

    }



    return 0;
}
