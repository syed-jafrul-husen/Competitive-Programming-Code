#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sc scanf
ll a[100000],b[10000],c[10000];
int main()
{
        int n,i,j,t=0;
        cin>>n;

        for(i=0; i<n; i++)
        {
            cin>>a[i];
            ++b[a[i]];
        }
        for(i=0; i<n; i++)
        {
            if(b[a[i]]==1){
                c[t] = a[i];
                ++t;}
            else
                --b[a[i]];
        }
        printf("%d\n",t);
         for(i=0; i<t; i++)
        {
            printf("%d ",c[i]);
        }


}



