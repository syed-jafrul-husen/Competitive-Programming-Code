#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


int main()
{
    int a,b,c,d;
    while(cin>>a>>b)
    {
        if(a==-1 && b==-1)
            continue;
        c = abs(a-b);
        d = min(100-a,100-b);
        if(a>b)
        {
            d = b+d;
        }
        else
        {
            d = a+d;
        }
        d = min(c,d);
        cout<<d<<endl;
    }

}
