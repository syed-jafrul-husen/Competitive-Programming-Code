#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m,i,c=1,sum;
    scanf("%d",&n);
    int a[n];
    scanf("%d",&m);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    sum = a[n-1];
    for(i=n-2; i>=0; i--)
    {
        if(sum>=m)
            break;
        else
        {
            sum = sum + a[i];
            ++c;
        }
        if(sum>=m)
            break;
    }
    printf("%d\n",c);
}
