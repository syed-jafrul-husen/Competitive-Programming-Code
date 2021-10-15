#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,sum,t;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    sum = a+b+c+d+e+f;
    if(sum%2==1)
    {
        printf("NO\n");
        return 0;
    }
    sum = sum/2;
    if(sum==(a+b+c))
        printf("YES\n");
    else if(sum==(a+b+d))
        printf("YES\n");
    else if(sum==(a+b+e))
        printf("YES\n");
    else if(sum==(a+b+f))
        printf("YES\n");
    else if(sum==(a+c+d))
        printf("YES\n");
    else if(sum==(a+c+e))
        printf("YES\n");
    else if(sum==(a+c+f))
        printf("YES\n");
    else if(sum==(a+d+e))
        printf("YES\n");
    else if(sum==(a+d+f))
        printf("YES\n");
    else if(sum==(a+e+f))
        printf("YES\n");
    else if(sum==(b+c+d))
        printf("YES\n");
    else if(sum==(b+c+e))
        printf("YES\n");
    else if(sum==(b+c+f))
        printf("YES\n");
    else if(sum==(c+d+e))
        printf("YES\n");
    else if(sum==(c+d+f))
        printf("YES\n");
    else if(sum==(e+d+f))
        printf("YES\n");
    else
        printf("NO\n");


}
