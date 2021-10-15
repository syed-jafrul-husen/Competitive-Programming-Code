#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,a[3],t;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&a[j]);
        }
        sort(a,a+3);
        printf("Case %d: %d\n",i+1,a[1]);
    }
    return 0;
}
