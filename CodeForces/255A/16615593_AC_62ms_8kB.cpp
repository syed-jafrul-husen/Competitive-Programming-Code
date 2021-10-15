#include<bits/stdc++.h>
using namespace std;

int a[6];

int main()
{
    int t,n,i=1,j,ch,bi,ba;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        if(i%3==1)
            a[0]+=n;
        else if(i%3==2)
            a[1]+=n;
        else
            a[2]+=n;
    }
    ch = a[0],bi = a[1],ba = a[2];
    sort(a,a+3);
    if(ch==a[2])
        printf("chest\n");
    else if(bi==a[2])
        printf("biceps");
    else
        printf("back\n");
    return 0;
}
