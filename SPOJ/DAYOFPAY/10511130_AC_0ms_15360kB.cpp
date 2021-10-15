#include<stdio.h>
int main()
{
    int i,a;
    for(a=0; a<=31; a++)
    {
        scanf("%d",&i);
        if(i==0)
            printf("");
        else if(i==1 || i==7 || i==13 || i==19 || i==25 || i==31)
            printf("Case %d: Anjan\n",i);
        else if(i==2 || i==8 || i==14 || i==20 || i==26)
            printf("Case %d: Sufian\n",i);
        else if(i==3 || i==9 || i==15 || i==21 || i==27)
            printf("Case %d: Alim\n",i);
        else if(i==4 || i==10 || i==16 || i==22 || i==28)
            printf("Case %d: Shipu\n",i);
        else if(i==5 || i==11 || i==17 || i==23 || i==29)
            printf("Case %d: Sohel\n",i);
        else if(i==6 || i==12 || i==18 || i==24 || i==30)
            printf("Case %d: Sumon\n",i);
    }
    return 0;
}

