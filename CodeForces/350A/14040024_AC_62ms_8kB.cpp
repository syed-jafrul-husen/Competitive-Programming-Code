#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int a[n],b[m];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<m; i++)
    {
        scanf("%d",&b[i]);
    }
    sort(a,a+n);
    sort(b,b+m);
    int maxx = a[n-1];
    if(maxx<b[0])
    {
        while(1)
        {
            if(maxx<b[0] &&maxx>=a[0]*2)
            {
                printf("%d",maxx);
                return 0;
            }
            else if(maxx>=b[0])
                break;
            else
                ++maxx;
        }
    }
    printf("-1\n");
}
