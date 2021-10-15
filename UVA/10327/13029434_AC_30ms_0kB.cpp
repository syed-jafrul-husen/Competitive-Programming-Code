#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,t=0,i,a[100000],temp,t1=0,t2=0;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        t1 = 0;
        while(1)
        {
            t2 = 0;
            for(i=0; i<n-1; i++)
            {
                if(a[i]>a[i+1])
                {
                    temp = a[i];
                    a[i] = a[i+1];
                    a[i+1] = temp;
                    ++t1;
                }
                else
                    ++t2;
            }
            if((t2+1)==n)
            {
                break;
            }
        }
        printf("Minimum exchange operations : %d\n",t1);

    }
    return 0;
}
