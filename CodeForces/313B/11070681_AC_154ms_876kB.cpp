#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100007];
    int n,i,j,c=0,m,d,e;
    scanf("%s",&a);
    n = strlen(a);
    int b[n];
    b[0] = 0;
    for(i=0; i<n-1; i++)
    {
        if(a[i]==a[i+1])
            b[i+1] = ++c;
        else
            b[i+1] = c;

    }
    scanf("%d",&m);
    int ans[m];
    for(i=0; i<m; i++)
    {
        scanf("%d%d",&d,&e);
        ans[i] = b[e-1]-b[d-1];
    }
    for(i=0; i<m; i++)
    {
         printf("%d\n",ans[i]);
    }

}
