#include<bits/stdc++.h>
using namespace std;

int b[100000];

int main()
{
   int n,s,d,i,t,a,b;
   scanf("%d",&n);
   for(i=0; i<n; i++)
   {
       scanf("%d%d",&s,&d);
       t = s+d;
       if(s>=d && t%2==0)
       {
           a = t/2;
           b = s-a;
           printf("%d %d\n",a,b);
       }
       else
        printf("impossible\n");
   }
    return 0;
}
