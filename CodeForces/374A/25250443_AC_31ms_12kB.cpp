#include<bits/stdc++.h>
using namespace std;
#define ll long long;

int main()
{
    int n,m,i,j,k,a,b,mn = 99999999;
    cin>>n>>m>>i>>j>>a>>b;
    int x[] = {1,n,n,1};
    int y[] = {m,1,m,1};
    for(k=0; k<4; k++)
    {
        if( abs(x[k]-i)%a==0 && abs(y[k]-j)%b==0 )
        {
            int  L = abs(x[k]-i)/a;
            int  R = abs(y[k]-j)/b;
            if( (R-L)%2==0 )
                mn = min( max(L,R), mn );
        }
    }
    if(mn==99999999 || (mn!=0 && (n<=a || m<=b) ))
        cout<<"Poor Inna and pony!"<<endl;
    else
        cout<<mn<<endl;
}
