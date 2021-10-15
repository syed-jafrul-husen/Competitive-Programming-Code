#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,t=0,i;
    char a[105],b[105];
    scanf("%s%s",&a,&b);
    n = strlen(a);
    for(i=0; i<n; i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            a[i] = a[i]+32;
        }
        if(b[i]>='A' && b[i]<='Z')
        {
            b[i] = b[i]+32;
        }
    }
    for(i=0; i<n; i++)
    {
        if(a[i]>b[i])
        {
            t = 1;
            break;
        }
        if(a[i]<b[i])
        {
            t = -1;
            break;
        }
    }
    printf("%d\n",t);
}
