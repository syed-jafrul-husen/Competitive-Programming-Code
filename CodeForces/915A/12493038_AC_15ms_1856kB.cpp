
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i,a[1000],t;
    scanf("%d%d",&n,&k);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    for(i=n-1; i>=0; i--)
    {
        if(k%a[i]==0)
        {
            t = k/a[i];
            printf("%d\n",t);
            break;
        }
    }
}



