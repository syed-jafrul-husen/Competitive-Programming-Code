#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t,i,c;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&a);
        if(a>10)
        {
            b = 10 - a;
            if(b<0)
                b = -b;
            c = a-b;
            printf("%d %d\n",b,c);
        }
        else
        {
            printf("0 %d\n",a);
        }
    }
    return 0;
}
