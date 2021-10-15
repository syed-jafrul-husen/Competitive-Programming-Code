#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,b,t,a;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d%d",&a,&b);
        if(a<0)
            a = -a;
        if(b<0)
            b = -b;
        printf("Case %d: %d\n",i+1,a+b);

    }
    return 0;
}
