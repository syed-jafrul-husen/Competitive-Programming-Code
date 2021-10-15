#include<bits/stdc++.h>
using namespace std;
int a[100000],n,i,j,k,c,d,e,cnt=0,m;



int main()
{
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        double ans;
        c = 0;
        cnt = 0;
        m = ((n-1)*n)/2;
        for(i=0; i<n; i++)
            cin>>a[i];
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(__gcd(a[i],a[j])==1)
                    ++cnt;
            }
        }
        if(cnt)
        {
            ans = (6.0*m)/(cnt*1.0);
            printf("%.6lf\n",sqrt(ans));
        }
        else
            cout<<"No estimate for this data set."<<endl;

    }
}
