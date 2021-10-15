#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m,s=0,c=1,i;
    scanf("%d%d",&m,&n);
    int a[m];
    for(i=0; i<m; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<m; i++)
    {
        s = s + a[i];
        if(s<=n)
        {
            continue;
        }
        s = 0;
        ++c;
        --i;
    }
    printf("%d\n",c);
}
