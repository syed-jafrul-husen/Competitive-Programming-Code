#include<bits/stdc++.h>
using namespace std;
int a[1000005],b[1000005],c[1000005];
int main()
{
    int n,m,i,j,d = 0;
    scanf("%d%d",&n,&m);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1; i>=0; i--)
    {
        if(b[a[i]]==0)
        {
            ++d;
            c[i] = d;
            //printf("%d\t",c[i]);
        }
        else
        {

            c[i] = d;
            //printf(" =%d=\t",c[i]);
        }
        b[a[i]] = 1;
        //printf("%d\t",b[a[i]]);
    }
    for(i=0; i<m; i++)
    {
        scanf("%d",&j);
        printf("%d\n",c[j-1]);
    }
}
