#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    if(n>=2)
    {
        if(a[n-1]==15)
            printf("DOWN\n");
        else if(a[n-1]==0)
        printf("UP\n");
        else if(a[n-1]==(a[n-2]+1))
            printf("UP\n");
        else if((a[n-1]+1)==a[n-2])
            printf("DOWN\n");
        else
            printf("-1\n");
    }
    else if(a[n-1]==15)
        printf("DOWN\n");
    else if(a[n-1]==0)
        printf("UP\n");
    else
        printf("-1\n");
}
