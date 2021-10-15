#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i=0;
    scanf("%d%d",&n,&m);
    while((n>0) && (m>0))
    {
        if(n<m)
        {
            if(n>1 && m>1)
            {
                n = n+1;
                m = m-2;
            }
            else if((m==1 && n>1))
            {
                m = m+1;
                n = n-2;
            }
            else if((n==1 && m>1))
            {
                n = n+1;
                m = m-2;
            }
            else if(m==1 && n==1)
            {
                n = n+1;
                m = m-2;
            }
        }
        else
        {
            if(n>1 && m>1)
            {
                n = n-2;
                m = m+1;
            }
            else if((m==1 && n>1))
            {
                m = m+1;
                n = n-2;
            }
            else if((n==1 && m>1))
            {
                n = n+1;
                m = m-2;
            }
            else if(m==1 && n==1)
            {
                break;
            }
        }
        i++;
        if(n<1 || m<1)
            break;
    }
    printf("%d\n",i);
}
