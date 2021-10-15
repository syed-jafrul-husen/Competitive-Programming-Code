#include<stdio.h>
int main()
{
    int C,N,i,j,k;
    scanf("%d",&C);
    for(k=0; k<C; k++)
    {
        scanf("%d",&N);
        for(i=1; i<=N; i++)
        {
            for(j=1; j<=N; j++)
            {
                if(j<N)
                    printf("%d ",i*j);
                else
                    printf("%d",i*j);
            }
            printf("\n");
        }
    }
}
