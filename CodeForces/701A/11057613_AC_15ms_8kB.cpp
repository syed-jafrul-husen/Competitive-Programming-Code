#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,m,h,sum;
    scanf("%d",&n);
    int a[n],s[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
        s[i] = a[i];
    sort(s,s+n);
    sum = s[0] + s[n-1];

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i]+a[j]==sum)
            {

                m=i+1;
                h=j+1;
                if(h==m)
                    continue;
                a[j] = 0;
                a[i] = 0;
                printf("%d %d\n",m,h);
                break;
            }
        }
    }
}
