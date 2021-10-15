#include<bits/stdc++.h>
using namespace std;

int a[30000+8];


int main()
{
    int n,i,j,u,v,c=1,x=1,t;
    scanf("%d%d",&n,&t);
    for(i=1; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    while(x<t)
    {
        x+=a[x];
    }
    if(x==t)printf("YES\n");
    else printf("NO\n");
}
