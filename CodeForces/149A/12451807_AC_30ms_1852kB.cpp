#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b=0,c=0,i,t=0;
    scanf("%d",&a);
    int arr[13];
    for(i=0; i<12; i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+12);
    if(a==0)
    {
        printf("0\n");
        t = 1;
    }
    else
    {
        for(i=11; i>=0; i--)
        {
            b = b + arr[i];
            ++c;
            if(b>=a)
            {
                printf("%d\n",c);
                t = 1;
                break;
            }
        }
    }
    if(t==0)
        printf("-1\n");
    return 0;
}
