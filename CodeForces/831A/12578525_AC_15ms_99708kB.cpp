#include<bits/stdc++.h>
using namespace std;

char str[100000000];

int main()
{
    int n,i,j,c1=0,c2=0,t=0,c3=0,w=0;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int x = a[0];
    for(i=0; i<n; i++)
    {
        if(a[i]==a[0])
            ++t;
    }
    if(t==n)
        printf("YES\n");
    else
    {
        t = 0;
        for(i=0; i<n-1; i++)
        {
            if(a[i]<a[i+1] && c2==0 && c3==0)
            {
                ++c1;
                //printf("1 = %d\n",c1);
            }
            else if(a[i]==a[i+1] && c3!=0)
            {
                t = -1;
                //printf("2 = %d\n",t);
            }
            else if(a[i]==a[i+1])
            {
                ++c2;
                if(w==0)
                    w=a[i];
                if(w!=a[i] || w!=a[i+1])
                    t  =-1;
                //printf("3 = %d\t%d\t%d\n",c2,w,t);
            }
            else if(a[i]<a[i+1] && c2!=0)
            {
                t = -1;
                //printf("4 = %d\n",t);
            }
            else if(a[i]<a[i+1] && c3!=0)
            {
                t = -1;
                //printf("5 = %d\n",t);
            }
            else if(a[i]>a[i+1])
            {
                ++c3;
               // printf("6 = %d\n",c3);
            }

        }

        //printf("\n\n%d\n",c1);
        if(t==-1)
            printf("NO\n");
        else
            printf("YES\n");
    }
}
