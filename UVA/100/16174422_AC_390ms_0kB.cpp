#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,i,j,k,c=0,maxx,x,y;
    while(cin>>x>>y)
    {
        a = min(x,y);
        b = max(x,y);
        maxx = 0;
        c = 0;
        for(j=a; j<=b; j++)
        {
            i = j;
            c = 0;
            while(1)
            {
                ++c;
                if(i==1)
                    break;
                if(i%2==1)
                    i = 3*i+1;
                else
                    i/=2;
            }
            if(maxx<c)
                maxx = c;
            //cout<<c<<endl;
        }
        cout<<x<<" "<<y<<" "<<maxx<<endl;
    }
}
