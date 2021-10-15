#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,c,sum,num[10002],count,j;
    float avg,ans;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        sum = 0;
        count = 0;
        scanf("%d",&c);
        for(j=0; j<c; j++)
        {
            scanf("%d",&num[j]);
            sum = sum + num[j];
        }
        avg = sum/((1.0)*c);
        for(j=0; j<c; j++)
        {
            if(avg<num[j])
                ++count;
        }
        ans = (count/((1.0)*c))*100;
        printf("%.3f%%\n",ans);
    }
}