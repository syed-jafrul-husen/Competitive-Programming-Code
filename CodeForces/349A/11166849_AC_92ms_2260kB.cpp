#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,n25=0,n50=0;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    if(a[0]!=25)
        printf("NO\n");
    else
    {
        for(i=0; i<n; i++)
        {
            if(a[i]==25)
                ++n25;
            else if(a[i]==50)
            {
                --n25;
                ++n50;
            }
            else if(a[i]==100)
            {
                if(n50>0)
                {
                    --n50;
                    --n25;
                }
                else
                    n25 = n25-3;
            }
            if(n25<0)
            {
                printf("NO\n");
                break;
            }
        }
        if(n25>=0)
            printf("YES\n");
    }

}
