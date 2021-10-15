#include<iostream>
using namespace std;
int main()
{
    int n,s,x,y,s2,i;
    int t=-1;
    cin>>n>>s;
    s = s*100;
    for(i=0; i<n; i++)
    {

        cin>>x>>y;
        s2 = x*100+y;
        if(s>=s2)
        {
             t=max(t,(100-y)%100);
        }

    }
    cout<<t;

}
