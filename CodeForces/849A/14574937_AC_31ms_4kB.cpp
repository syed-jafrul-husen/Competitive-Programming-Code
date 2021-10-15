#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,i,b=0,c=0,t;

   cin>>n;
   int a[n+2];
   for(i=0; i<n; i++)
    cin>>a[i];
   if(n%2==1 && a[0]%2==1 && a[n-1]%2==1)
    cout<<"Yes"<<endl;
   else
    cout<<"No"<<endl;
    return 0;
}
