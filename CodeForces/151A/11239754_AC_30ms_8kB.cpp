#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    scanf("%d%d%d%d%d%d%d%d",&n,&k,&l,&c,&d,&p,&nl,&np);
    int mili = (k*l)/nl;
    int lime = c*d;
    int salt = p/np;
    int min1 =  mili/n;
    int min2 = lime/n;
    int min3 = salt/n;
    int min = min1;
    if(min2<min)
        min = min2;
    if(min3<min)
        min = min3;
    printf("%d\n",min);
}
