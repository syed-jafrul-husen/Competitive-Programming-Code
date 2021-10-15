#include<bits/stdc++.h>
using namespace std;

int a[2005],b[10005];

int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        c = 0;
        for(j=0; j<n; j++)
        {
            if(a[i]<a[j])
                ++c;
        }
        b[i] = c+1;
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
}
