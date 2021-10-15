#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int a[n],b[m];
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    for(i=0; i<m; i++)
        scanf("%d",&b[i]);
    sort(b,b+m);
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(a[i]==b[j])
            {
                printf("%d\n",a[i]);
                return 0;
            }
        }
    }
    if(a[0]<b[0])
        printf("%d%d\n",a[0],b[0]);
    else
        printf("%d%d\n",b[0],a[0]);
    return 0;
}
