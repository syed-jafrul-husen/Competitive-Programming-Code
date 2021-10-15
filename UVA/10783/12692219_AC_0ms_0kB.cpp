#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,c=0,j,a,b;
    scanf("%d",&t);

    for(i=0; i<t; i++)
    {
        c = 0;
        scanf("%d%d",&a,&b);
        for(j=a; j<=b; j++)
        {
            if(j%2==1)
                c = c+j;
        }
        printf("Case %d: %d\n",i+1,c);
    }

    return 0;
}
