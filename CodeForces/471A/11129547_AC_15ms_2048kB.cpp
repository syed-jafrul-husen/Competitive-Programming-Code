#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,a[6],x,y,b[6],c,w=0,count=1,count1=0;
    for(i=0; i<6; i++)
        scanf("%d",&a[i]);
    for(i=0; i<6; i++)
        b[i] = a[i];
    sort(b,b+6);
    for(i=0; i<5; i++)
    {
        if(b[i]==b[i+1])
        {
            ++count;
            c = b[i];
        }
        if(b[i]!=b[i+1])
            count = 1;
        if(count==4)
            break;
    }
    if(count<4)
        printf("Alien\n");
    else
    {
        for(i=0; i<6; i++)
        {
            if(a[i]==c)
            {
                if(count1<4)
                {
                    a[i]= 0;
                    ++count1;
                }
            }
        }
        for(i=0; i<6; i++)
        {
            if(a[i]!=0 && w==0)
            {
                x = a[i];
                ++w;
            }
            if(a[i]!=0 && w==1)
            {
                y = a[i];
            }

        }
        if(x==y)
            printf("Elephant\n");
        else
            printf("Bear\n");
    }
}
