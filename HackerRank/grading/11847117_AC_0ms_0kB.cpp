#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,b;
    scanf("%d",&n);
    for(i==0; i<n; i++)
    {
        scanf("%d",&a);
        if(a<38)
            printf("%d\n",a);
        else
        {
            b = a%5;
            if(b==3 || b==4)
                printf("%d\n",a+(5-b));
            else
                printf("%d\n",a);
        }

    }
    return 0;
}
