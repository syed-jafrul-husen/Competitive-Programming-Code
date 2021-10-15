#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k,l,r,c,cnt,x,y;
    int a[102][102];
    while(1)
    {
        r = 0,c =0,cnt = 0,x=0,y=0;
        cin>>n;
        if(n==0)
            break;
        for(i=0; i<n; i++)
        {
            cnt = 0;
            for(j=0; j<n; j++)
            {
                cin>>a[i][j];
                cnt+=a[i][j];
            }
            if(cnt%2==1)
            {
                ++r;
                x = i+1;
            }
        }
        for(i=0; i<n; i++)
        {
            cnt = 0;
            for(j=0; j<n; j++)
            {
                cnt+=a[j][i];

            }
            if(cnt%2==1)
            {
               ++c;
               y = i+1;
            }
        }
        if(c==0 && r==0)
        {
            cout<<"OK"<<endl;
            continue;
        }
        else if( (r>1 || c>1) || (r==0 && c>0) || (c==0 && r>0) )
            cout<<"Corrupt"<<endl;
        else
            cout<<"Change bit ("<<x<<","<<y<<")"<<endl;
    }
}
