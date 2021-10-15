#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,y=0,y2=0,y3=0;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%4==0)
            ++y;
        else if(a[i]%2==0)
            ++y2;
        else if(a[i]%2!=0)
            ++y3;
    }
    if(y2==0 && y3<=y+1)
        printf("Yes\n");
    else if(y2>0 && y3<=y)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
