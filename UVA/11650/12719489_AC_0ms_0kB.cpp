#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,x,y;
    char a;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d%c%d",&x,&a,&y);
        if(y!=0)
        {
            if(x==12)
                printf("11");
            else if(x==1)
                printf("10");
            else if(x==2)
                printf("09");
            else if(x==3)
                printf("08");
            else if(x==4)
                printf("07");
            else if(x==5)
                printf("06");
            else if(x==6)
                printf("05");
            else if(x==7)
                printf("04");
            else if(x==8)
                printf("03");
            else if(x==9)
                printf("02");
            else if(x==10)
                printf("01");
            else if(x==11)
                printf("12");
        }
        else
        {
            if(x==12)
                printf("12");
            else if(x==1)
                printf("11");
            else if(x==2)
                printf("10");
            else if(x==3)
                printf("09");
            else if(x==4)
                printf("08");
            else if(x==5)
                printf("07");
            else if(x==6)
                printf("06");
            else if(x==7)
                printf("05");
            else if(x==8)
                printf("04");
            else if(x==9)
                printf("03");
            else if(x==10)
                printf("02");
            else if(x==11)
                printf("01");
        }

        printf(":");
        if(y==00)
            printf("00\n");
        else{
            y=60-y;
            if(y<10)
                printf("0%d\n",y);
            else
                printf("%d\n",y);
        }

    }
    return 0;
}
