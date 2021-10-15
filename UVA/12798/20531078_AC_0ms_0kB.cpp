#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)==2)
    {
        int c = 0,i,j,a;
        for(i=0; i<n; i++)
        {
            int temp=0;
            for(j=0; j<m; j++)
            {
                scanf("%d",&a);
                if(a>0)
                    ++temp;
            }
            if(temp==m)
                ++c;
        }
        printf("%d\n",c);
    }
}
