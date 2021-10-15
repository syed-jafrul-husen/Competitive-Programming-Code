#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define sc scanf()

int main()
{
    int m,i,j,t;
    string a,left="",s="";
    cin>>t;
    int k=0,pos,right=0;

    for(k=0; k<t; k++){
        left="",s="";
    pos,right=0;
             cin>>a;
    for(int i=0; i<a.length(); i++)
    {
        if(a[i]=='-')
        {
            pos=i;
            break;
        }
        left=left+a[i];

    }
    for(j=pos+1; j<a.length(); j++)
    {
        s = s+a[j];
    }
    int p=s.length();
    int r=powl(10,p-1);
    for(i=0; i<p; i++)
    {
        right+=(s[i]-48)*r;
        r/=10;
    }

    int n=left.length(),n2=n-1,num=0;
    for(i=0; i<n; i++)
    {
        int temp = left[i]-65;
        num = (temp*powl(26,n2))+num;
        --n2;
    }
    if(abs(num-right)<=100)
        cout<<"nice"<<endl;
    else
        cout<<"not nice"<<endl;}

}
