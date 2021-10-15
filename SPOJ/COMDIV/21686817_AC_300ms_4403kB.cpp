#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
 
    int t,n,i,j,k,l,c=0,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        n = __gcd(a,b);
        int sq = sqrt(n);
        c =0;
        for(i=1; i<=sq; i++)
        {
            if(n%i==0)
            {
                if(n/i==i)
                {
                    ++c;
                }
                else
                {
                    c+=2;
                }
            }
        }
        printf("%d\n",c);
    }
}