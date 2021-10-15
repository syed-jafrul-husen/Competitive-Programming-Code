#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,c=0,j;
    char a[1000002];
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        c=0;
        scanf("%s",a);
        n = strlen(a);
        for(j=0; j<n-1; j++)
        {
            if(a[j]=='<' && a[j+1]=='>')
            {
                ++c;
                ++j;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
