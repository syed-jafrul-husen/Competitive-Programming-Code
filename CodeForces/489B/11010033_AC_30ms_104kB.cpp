#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,g,q[105],w[105],i,j,count=0,c;
    scanf("%d",&b);
    for(i=0; i<b; i++)
    {
        scanf("%d",&q[i]);
    }
    scanf("%d",&g);
    for(i=0; i<g; i++)
    {
        scanf("%d",&w[i]);
    }
    sort(q,q+b);
    sort(w,w+g);
    if(b>g)
    {
        for(i=0; i<b; i++)
        {
            for(j=0; j<g; j++)
            {

                c = q[i] - w[j];
                if( (c==1) || (c==-1) || (c==0) )
                {
                    count++;
                    w[j] = -803;
                    break;
                }

            }
        }
    }
    else
    {
        for(i=0; i<g; i++)
        {
            for(j=0; j<b; j++)
            {

                c = q[j] - w[i];
                if( (c==1) || (c==-1) || (c==0) )
                {
                    count++;
                    q[j]=-304;
                    break;
                }

            }
        }
    }
    printf("%d",count);
}
