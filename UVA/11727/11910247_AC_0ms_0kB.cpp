#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,b,j,c,n;
    cin>>n;
    int a,mid;
    for(i=1; i<=n; i++)
    {
        cin>>a>>b>>c;
        if((a>b && a<c) || (a>c && a<b))
        {
            mid=a;
        }
        else if((b>a && b<c) || (b>c && b<a))
        {
            mid=b;
        }
        else if((c>a && c<b) || (c>b && c<a))
            mid=c;
        else
            mid=a;
        cout<<"Case "<<i<<": "<<mid<<endl;
    }
    return 0;
}
