#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    int b[3],d;
    string s;
    cin>>n;
    for(int i=0; i<3; i++)
    {
        cin>>s;
        int l=s.length();
        int a[256]= {0};
        for(int j=0; j<l; j++)
            a[s[j]]++;
        sort(a,a+256);
        x=a[255];
        b[i]=x;
        //cout<<b[i]<<" "<<l<<endl;
        if(n==1&&b[i]==l)
            l--;
        b[i]=min(b[i]+n,l);
        //cout<<b[i]<<" "<<l<<endl<<endl;;
    }
    if(b[0]>b[1]&&b[0]>b[2])
        cout<<"Kuro";
    else if(b[1]>b[0]&&b[1]>b[2])
        cout<<"Shiro";
    else if(b[2]>b[0]&&b[2]>b[1])
        cout<<"Katie";
    else
        cout<<"Draw";
}
