#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c=0,d,i,j,k;
    cin>>k;
    cin>>a>>b;
    while(1)
    {

        if(a%10==7 || b%10==7)
        {
            break;
        }
        else
        {
            if(b-k>-1)
            {
                b = b-k;
            }
            else
            {
                b = b+60;
                if(a==0)
                    a = 24;
                --a;
                if(a==0)
                    a = 24;
                b = b-k;
            }
            ++c;
        }
        //cout<<a<<" "<<b<<endl;
        if(c==24*61)
            c = -1;
    }
    if(c==-1)
    {
        while(1)
        {
            if(a%10==7 || b%10==7)
            {
                break;
            }
            else
            {
                if(a==24)
                    a = 1;
                if(b+k<=60)
                {
                    b = b+k;
                }
                else
                {
                    b = b+k;
                    b = b-60;
                    ++a;
                }
                ++c;

            }
            if(c==24*61)
                c = -1;
        }
    }
    cout<<c<<endl;
    return 0;
}
