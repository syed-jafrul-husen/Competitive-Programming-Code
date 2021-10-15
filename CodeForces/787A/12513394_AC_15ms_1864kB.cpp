#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c,d,e,f,i,j,t=-1;
    long long x[1000],y[1000];
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    for(i=0; i<1000; i++)
    {
        x[i] = b + a*i;
        y[i] = d + c*i;
    }
    for(i=0; i<1000; i++)
    {
        for(j=0; j<1000; j++)
        {
            if(x[i]==y[j])
            {
                t = x[i];
                break;
            }
            else if(x[i]<y[j])
                break;
        }
        if(t!=-1)
            break;
    }
    printf("%lld\n",t);



    return 0;

}

