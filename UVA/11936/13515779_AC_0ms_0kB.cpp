#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,a,b,c;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a+b>c && a+c>b && b+c>a)
            printf("OK\n");
        else
            printf("Wrong!!\n");
    }

}
