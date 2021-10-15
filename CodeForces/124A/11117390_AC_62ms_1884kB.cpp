#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,min1,min2,min;
    scanf("%d%d%d",&n,&a,&b);
    min1 = n-a;
    min2 = b+1;
    min = min1;
    if(min>min2)
        min = min2;
    printf("%d\n",min);

}
