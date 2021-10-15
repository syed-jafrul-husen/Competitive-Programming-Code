#include<stdio.h>
int main()
{
    int T,N,i,l,f;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&N);
        l=N%10;
        while(N>0)
        {
            f=N;
            N=N/10;
        }
        printf("%d\n",l+f);
    }
    return 0;
}
