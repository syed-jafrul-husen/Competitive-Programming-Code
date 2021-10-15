#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k,ax,ay,bx,by,cx,cy,dx,dy,s1,s2,s3,s4,t;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        s1 = bx-ax;
        s2 = cy-by;
        dx = cx-s1;
        dy = ay+s2;
        s1 = abs( (ax-bx)*dy - (ax-bx)*ay + (by-ay)*dx + (ay-by)*ax );
        cout<<"Case "<<i<<": ";
        cout<<dx<<" "<<dy<<" "<<s1<<endl;
    }

}
