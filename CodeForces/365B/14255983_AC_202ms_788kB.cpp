#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[100005];
int main()
{
    ll n,m,i,j,b,cnt=2,cnt2=2;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    //sort(a,a+n);
    for(i=2; i<n; i++)
    {
        if((a[i-1]+a[i-2])==a[i])
        {
            ++cnt;
            //cout<<cnt<<endl;
        }
        else
        {
            if(cnt>cnt2)
            {
                cnt2 = cnt;
            }
            cnt=2;
        }
    }
    if(cnt>cnt2)
    {
        cnt2 = cnt;
    }
    cnt=2;
    if(n==1)
        cnt2 = 1;
    cout<<cnt2<<endl;
}
