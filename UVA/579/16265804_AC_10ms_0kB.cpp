#include<bits/stdc++.h>
using namespace std;

int main()
{
    float h,m,i,j,k,l,a,b,c;
    double d;
    int x,y;
    while(1)
    {
        scanf("%d:%d",&x,&y);
        h = x*1.0;
        m = y*1.0;
        if(x==0 && y==0)
            break;
       m*=6;
       h*=5;
       h*=6;
       h = h+(y*0.5);
       a = abs(h-m);
       x = abs(h-m)+0.5;
       if(x>180)
        a = 360.0-a;
       //cout<<h<<" "<<m<<endl;
       printf("%.3f\n",a);
    }
    //cout<<endl;
}
