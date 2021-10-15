#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,a[5][5],b,c,d;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
            {
                b = i;
                c = j;
            }
        }
    }

   b = abs(b-2);
   c = abs(c-2);
    d = b+c;
    printf("%d\n",d);

}
