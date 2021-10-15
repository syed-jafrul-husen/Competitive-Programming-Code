#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[100000];
    int n,i,c1=0,c2=0,c3=0;
    gets(a);
    n = strlen(a);
    for(i=0; i<n-1; i++)
    {
        if( (a[i]=='A') && a[i+1]=='B')
        {
            ++c1;
            i=i+1;
            continue;
        }
        if( (a[i]=='B') && a[i+1]=='A')
        {
            ++c2;
            i=i+1;
        }
    }
    if(c1==2 || c2==2)
    {
        for(i=0; i<n; i++)
        {
            if( (a[i]=='B' && a[i+1]=='A'&& a[i+2]=='B' && a[i+3]=='A') || (a[i]=='A' && a[i+1]=='B'&& a[i+2]=='A' && a[i+3]=='B') )
                ++c3;
        }
    }
    //printf("%d\t%d",c1,c1);
    if( (c1>1) && (c2==0) && (n>4) )
    {
        for(i=0; i<n-1; i++)
        {
            if( (a[i]=='B') && a[i+1]=='A')
            {
                ++c2;
                i=i+1;
            }
        }
    }
    if( (c1==0) && (c2>1) && (n>4))
    {
        for(i=0; i<n-1; i++)
        {
            if( (a[i]=='A') && a[i+1]=='B')
            {
                ++c1;
                i=i+1;
            }
        }
    }
    if(c3==1)
        printf("NO\n");
    else if(c1>0 && c2>0)
        printf("YES\n");
    else
        printf("NO\n");
}
