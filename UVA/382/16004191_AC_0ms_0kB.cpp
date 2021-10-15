#include<bits/stdc++.h>
using namespace std;
long long n,m,i,j,k,c=0,sm=0,t=0,ans=0;
int a[100000];

int divisor(int n)
{
    c = 0;

    for(i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
            {
                a[c] = i;
                ++c;
            }

            else
            {
                a[c] = i;
                ++c;
                a[c] = n/i;
                ++c;
            }
        }
    }
    return c;
}

int main()
{
    cout<<"PERFECTION OUTPUT"<<endl;
    while(1)
    {
        cin>>n;
        m = n;
        if(n==0)
            break;
        stringstream ss;
        ss<<m;
        string s = ss.str();
        int xx=s.size();
        for(i=0; i<5-xx; i++)
        {
            cout<<" ";
        }

        if(n==0)
            break;
        else
        {
            c = divisor(n);
            sort(a,a+c);
            sm = 0,t=0;

            for(i=0; i<c-1; i++)
                sm+=a[i];
            //cout<<sm<<endl;
            if(sm==m)
                cout<<m<<"  "<<"PERFECT"<<endl;
            else if(sm<m)
                cout<<m<<"  "<<"DEFICIENT"<<endl;
            else
                cout<<m<<"  "<<"ABUNDANT"<<endl;

        }

    }
    cout<<"END OF OUTPUT"<<endl;

    return 0;
}
