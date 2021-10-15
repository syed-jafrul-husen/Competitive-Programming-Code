#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll x1,y1,x2,y2,n,m,i,j,k,c,mn,mn2,mn3,mn4;
    cin>>n>>x1>>y1>>x2>>y2;
    mn =  abs(0-x1)+abs(0-y1)+abs(0-x2)+abs(0-y2);
    mn2 =  abs(n-x1)+abs(0-y1)+abs(n-x2)+abs(0-y2) ;
    mn3 =  abs(0-x1)+abs(n-y1)+abs(0-x2)+abs(n-y2)  ;
    mn4 =  abs(n-x1)+abs(n-y1)+abs(n-x2)+abs(n-y2)  ;

    if((x1==0 && x2==0) ||(x1==n && x2==n))
	{
	    mn = abs(y1-y2);
	    cout<<mn<<endl;
	}
	else if((y1==0 && y2==0) ||(y1==n && y2==n))
	{
	    mn = abs(x1-x2);
	    cout<<mn<<endl;
	}
	else
        cout<< min(min(mn,mn2),min(mn3,mn4)) <<endl;
}
