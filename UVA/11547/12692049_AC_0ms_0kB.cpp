#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,c=0;

    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&n);
        n = (((((n*567)/9)+7492)*235)/47)-498;
        n = n/10;
        n = n%10;
        n = abs(n);
        printf("%d\n",n);

    }
}
