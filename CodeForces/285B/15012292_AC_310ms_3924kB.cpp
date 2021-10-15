#include<bits/stdc++.h>
using namespace std;

int a[1000000];

main()
{
    int n,k,tem,s,i,t,cnt=0;
    cin>>n>>s>>t;
    for (i=0; i<n; i++)
    {
        cin>>a[i];
    }
    tem=s;
    cnt=0;
    while (tem!=t)
    {
        tem=a[tem-1];
        cnt++;
        if (cnt>n)
        {
            cout<<"-1"<<endl;
            return 0;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
