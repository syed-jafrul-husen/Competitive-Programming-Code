#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,i,j,k,m,n,f,x,m1,m2,cnt=0,a,b,c;
    //string s,s2,s4="",s3="";
    cin>>a>>b>>c>>n;
    for(i=0; i<n; i++)
    {
        cin>>t;
        if(t>b && t<c)
            ++cnt;
    }
    cout<<cnt<<endl;

}
