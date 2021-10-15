#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,n,a[50000],sum;
    char ch[50000];
    scanf("%d",&t);
    getchar();
    for(i=0; i<t; i++)
    {
        sum = 0;
        scanf("%s",&ch);
        getchar();
        n = strlen(ch);
        for(j=0; j<n; j++)
        {
            if(ch[j]=='I')
                a[j] = 1;
            else if(ch[j]=='V')
                a[j] = 5;
            else if(ch[j]=='X')
                a[j] = 10;
            else if(ch[j]=='L')
                a[j] = 50;
            else if(ch[j]=='C')
                a[j] = 100;
            else if(ch[j]=='D')
                a[j] = 500;
            else if(ch[j]=='M')
                a[j] = 1000;
        }
        for(j=0; j<n; j++)
        {
            if((j<n-1) && (a[j]<a[j+1]))
                a[j] = -a[j];
            sum = sum +(a[j]);
        }
        printf("Case %d: %d\n",i+1,sum);

    }
}
