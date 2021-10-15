#include<bits/stdc++.h>
using namespace std;

int a[10000000];

int main()
{
    int n,c=0,b=1,i,j;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    for(i=0; i<n-1; i++)
    {
        if(a[i]==a[i+1])
        {
            ++b;
        }
        else
        {
            if(b%2==1)
                ++c;
            b=1;
        }
    }
    b = b-1;
    if(a[n-1]!=a[n-2])
        ++c;
    else if(a[n-1]==a[n-2] && (b%2==0))
        ++c;

    printf("%d\n",c);
    return 0;
}
