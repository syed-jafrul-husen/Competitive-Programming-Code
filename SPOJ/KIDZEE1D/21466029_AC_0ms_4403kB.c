#include<stdio.h>

int main()
{
    long long n,t,te=0;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        printf("Case %d: ",++te);
        if(n>=80) printf("A+");
        else if(n>=75) printf("A");
        else if(n>=70) printf("A-");
        else if(n>=65) printf("B+");
        else if(n>=60) printf("B");
        else if(n>=55) printf("B-");
        else if(n>=50) printf("C");
        else if(n>=45) printf("D");
        else printf("F");
        printf("\n");
    }



    return 0;
}
