#include<bits/stdc++.h>
using namespace std;

long long a[100003],b[100003];

int main()
{
    long long q,n,i,j,c,m,top=0;
    scanf("%lld",&n);
    //long long a[n];
    for(i=0; i<n; i++)
    {
        scanf("%lld",&c);
        if(top<=c)
            top = c;
        a[c]++;
    }
    for(i=0; i<100003; i++)
    {
        if(i==0)
            b[i] = a[i];
        else
            b[i] = a[i]+b[i-1];
    }
    scanf("%lld",&q);
    for(i=0; i<q; i++)
    {
        scanf("%lld",&m);

        //printf("%lld\n",b[m]);
        if(top<m)
            printf("%d\n",n);
        else
            printf("%d\n",b[m]);

    }

    return 0;
}
