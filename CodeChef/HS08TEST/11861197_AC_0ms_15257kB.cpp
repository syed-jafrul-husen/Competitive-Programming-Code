#include<stdio.h>
int main()
{
    int X;
    float Y,ans;
    scanf("%d%f",&X,&Y);
    float X2 = X*1.0;
    if(X%5==0 && (X2+0.5)<=Y)
    {
        ans = (Y-X2)-0.5;
        printf("%.2f\n",ans);
    }
    else
        printf("%.2f\n",Y);
}