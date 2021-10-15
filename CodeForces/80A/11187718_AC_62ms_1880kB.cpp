#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m,i,flag=0,f=0,c,j,d;
    scanf("%d%d",&n,&m);
    for(i=2; i<m; i++)
    {
        if(m%i==0)
            flag = 1;
        if(flag==1)
            break;
    }
    if(flag==1 || n==m)
        printf("NO\n");
    else
    {
        c = m;
        for(i=n+1; i<=m; i++)
        {
            for(j=2; j<=m/2; j++)
            {
                if(i%j==0)
                {
                    f = 1;
                    //d = j;
                    break;
                }
            }
            if(f==1)
            {
                f = 0;
                continue;
            }
            else if(f==0)
            {
                c = i;
                break;
            }
        }
        if(c==m)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
