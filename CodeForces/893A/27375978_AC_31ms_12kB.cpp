#include<iostream>
using namespace std;

int main()
{
    int a=1,b=2,c=3,k,i,j,yes=1,n;
    cin>>n;
    while(n--)
    {
        cin>>k;
        if(k==a || k==b)
        {
            if(k==a)
                swap(b,c);
            else
                swap(a,c);
        }
        else
            yes = 0;
    }
    if(yes)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
