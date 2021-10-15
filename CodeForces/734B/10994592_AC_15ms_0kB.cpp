#include<stdio.h>
int main()
{
    long a2,b3,c5,d6,x,y,p,min,min2;
    scanf("%ld%ld%ld%ld",&a2,&b3,&c5,&d6);
    min = d6;
    if(a2<min)
    {
        if(a2<c5)
            min = a2;
        else
            min = c5;
    }
    else if(c5<min)
    {
        if(c5<a2)
            min = c5;
        else
            min = a2;
    }
    x = 256*min;
    p=a2-min;
    if(p==0)
        printf("%ld",x);
    else
    {
        if(p<b3)
            min2 = p;
        else
        {
            min2 = b3;
        }
        y = x+(min2*32);
        printf("%ld\n",y);
    }

}
