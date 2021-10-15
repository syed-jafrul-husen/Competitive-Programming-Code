#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n;
    cin>>n;
    //int a[n+2];
    if(n==1)
        cout<<1<<endl<<1<<endl;
    else if(n==2)
        cout<<1<<endl<<1<<endl;
    else if(n==3)
        cout<<2<<endl<<1<<" "<<3<<endl;
    else if(n==4)
        cout<<4<<endl<<2<<" "<<4<<" "<<1<<" "<<3<<endl;
    else
    {
        cout<<n<<endl;
        for(i=1; i<=n; i+=2)
        {
            cout<<i<<" ";
        }
        for(i=2; i<=n; i+=2)
        {
            if(i==n || (i%2==1 && i==(n-1)))
                cout<<i<<endl;
            else
                cout<<i<<" ";
        }
    }
}
