#include<bits/stdc++.h>
using namespace std;

int a[100005],b[100005];

int main()
{
    int n,i,q,c,max=0;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&c);
        if(max<=c)
            max= c;
        a[c]++;
    }

    for(i=0; i<100005; i++)
    {
        b[i] = a[i]+b[i-1];
    }
    scanf("%d",&q);
    long long m;
    for(i=0; i<q; i++)
    {
        scanf("%lld",&m);
        if(m>max)
            printf("%d\n",n);
        else
            printf("%d\n",b[m]);
    }

}