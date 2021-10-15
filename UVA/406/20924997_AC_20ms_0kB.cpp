#include<bits/stdc++.h>
using namespace std;
#define nSize 2000
#define pSize 2000

int flag[nSize+5];
int a[pSize+5];
int total = 0;
void sieve()
{
    int i,j,val;
    val = sqrt(nSize)+1;
    flag[1] = 1;
    for(i=2; i<val; i++)
        if(flag[i]==0)
            for(j=i; i*j<=nSize; j++)
                flag[i*j]=1;
    a[total++]=1;
    for(i=2; i<nSize; i++)
        if(flag[i]==0)
            a[total++]=i;
}


int main()
{
    int i,k,b,t,x,y,j;
    sieve();
    //freopen("output.txt","w",stdout);
    while(scanf("%d%d",&x,&y)==2)
    {
        t = 0;
        int c = 0,s,e,m;
        printf("%d %d:",x,y);
        for(i=0; i<total; i++)
        {
            if(a[i]<=x)
                ++c;
            else
                break;
        }
        if(c%2==0)
        {
            y*=2;
            m = c/2;
            b = m-(y/2)+1;
            e = m+(y/2);

        }
        else
        {
            y = (y*2)-1;
            m = (c+1)/2;
            b = m-(y/2);
            e = m+(y/2);
        }
        if(y>=c)
        {
            for(i=0; i<c; i++)
            {
                printf(" %d",a[i]);
            }
        }
        else
        {
            for(i=b-1; i<e; i++)
            {
                printf(" %d",a[i]);
            }
        }
        printf("\n\n");
    }
}

