#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,n,i=1,j,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        if(a==0)
            printf("Case %d: 0\n",i);
        else
        {
            j = 19+4*abs(a-b)+4*a;
            printf("Case %d: %d\n",i,j);
        }
        ++i;
    }
    return 0;
}
