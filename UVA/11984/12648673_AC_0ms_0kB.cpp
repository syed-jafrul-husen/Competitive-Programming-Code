#include <bits/stdc++.h>
using namespace std;

int main()
{

    int i,t;
    float a,b,ans;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%f%f",&a,&b);
        ans = (5/9.0)*b;
        ans = a+ans;
        printf("Case %d: %.2f\n",i+1,ans);
    }
}
