#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sc scanf

int main()
{
       int c=0,a[6][6],b,i,j;
       for(i=0; i<5; i++)
       {
           for(j=0; j<5; j++)
           {
               cin>>a[i][j];
               if(a[i][j]==1)
               {
                   b = i;
                   c = j;
               }
           }
       }
       b = b-2;
       c = c-2;
       if(b<0)
        b= -b;
       if(c<0)
        c = -c;
       b = b+c;
       cout<<b<<endl;
}



