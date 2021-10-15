#include<stdio.h>
int main()
{
    int T,N,i,num1,sum = 0;
    scanf("%d",&T);
    for(i=0; i<T; i++)
    {
        sum = 0;
        scanf("%d",&N);

        num1 = N%10;
        while(N > 0)
        {
            sum = sum+num1;
            N = N/10;
            num1 = N % 10;
        }
        printf("%d\n",sum);

    }return 0;
}