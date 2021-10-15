#include<bits/stdc++.h>
using namespace std;
#define ll  long long

int main()
{

    ll t,n,m,i,j,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll sm = (n*2);
        ll sq = sqrt(sm);
        k = 0;
        j = 0;
        for(i=sq; i>=0; i--)
        {
            if(sm-(i*(i+1))==0 )
            {
                j = i;
                break;
            }
            else if(sm-(i*(i+1))>0)
            {
                   // cout<<(sm-(i*(i+1)))<<" "<<sm<<" "<<sm - (i*(i+1))<<endl;
                j = i;
                break;
            }
        }
        cout<<j<<endl;
    }
}

