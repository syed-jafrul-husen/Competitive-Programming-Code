#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long l,w,i,c=0;
    scanf("%lld%lld",&l,&w);
    while(l>0 && w>0)
    {
        if(l>w)
        {
            c = c+(l/w);
            l = l%w;
        }
        else
        {
            c = c+(w/l);
            w = w%l;
        }
    }
    printf("%lld",c);

}
