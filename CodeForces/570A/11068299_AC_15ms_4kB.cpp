#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,c,i,j,count=1,win,d=0;
    scanf("%d%d",&p,&c);
    long long a[p],w[c],max=-1;
    for(i=0; i<c; i++)
    {
        for(j=0; j<p; j++)
        {
            scanf("%lld",&a[j]);
            if(a[j]>max)
            {
                w[i] = j+1;
                max = a[j];
            }
        }
        max = -1;
    }
    sort(w,w+c);
    win = w[0];
    for(i=0; i<c-1; i++)
    {

        if(w[i]==w[i+1])
            count++;
        if(count>d)
        {
            win = w[i];
            d =count;
        }
        if(w[i]!=w[i+1])
            count=1;
    }
    printf("%d\n",win);
}
