#include<bits/stdc++.h>
using namespace std;


int main()
{
    int i,j,a,b,c=0,n,t=0;
    char ch[10];
    scanf("%d%d",&a,&b);
    scanf("%s",ch);
    n = strlen(ch);
    //printf("%d\n",n);
    for(i=0; i<n; i++)
    {
        if(ch[i]>='0' && ch[i]<='9' && i<a)
        {
            ++t;
            if(t==a)
            {
                ++c;
                //printf("c1 = %d\n",c);
                t=0;
            }
        }
        else if(ch[i]=='-' && i==a)
        {
            ++t;
            if(t==1)
            {
                ++c;
                //printf("c2 = %d\n",c);
                t = 0;
            }
        }
        else if( ch[i]>='0' && ch[i]<='9'  )
        {
            ++t;
            if(t==b)
            {

                ++c;
                //printf("c3 = %d\n",c);
                t=0;
            }
        }

    }
    if(c==3)
        printf("Yes\n");
    else
        printf("No\n");
}
