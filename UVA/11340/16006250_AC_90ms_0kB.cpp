#include<bits/stdc++.h>
using namespace std;

double a[500];

int main()
{
    long long t,i,j,c=0,n,k,q,m;
    scanf("%lld",&t);
    for(i=0; i<t; i++)
    {
        long long sm  = 0,x;
        for(j=0; j<500; j++)
        {
            a[j] = 0;
        }
        scanf("%lld",&q);
        for(j=0; j<q; j++)
        {
            char ch;
            getchar();
            scanf("%c",&ch);
            getchar();
            scanf("%lld",&k);
            x = ch;
            //cout<<ch<<endl;
            a[x] = k;
        }
        string s;
        scanf("%lld",&q);
        //cout<<q<<endl;
        getchar();
        for(j=0; j<q; j++)
        {
            getline(cin,s);
            m = s.size();
            for(k=0; k<m; k++)
            {
                x = s[k];
                sm+=a[x];
                //cout<<a[x]<<" ";
            }
            //cout<<j<<endl;
        }
        double f ;
        f = (1.0*sm)/100.0;
        cout<<fixed<<setprecision(2)<<f<<"$"<<endl;
        //printf("%.2f$\n",f);
    }
}
