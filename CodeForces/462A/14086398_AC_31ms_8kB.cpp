#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,i,j,k,n,t;
    char ch[105][105];
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin>>ch[i][j];
        }
        //getchar();
    }
    i=0;
    for(j=0; j<=n+1; j++)
    {
        ch[i][j] = 'a';
    }
    i = n+1;
    for(j=0; j<=n+1; j++)
    {
        ch[i][j] = 'a';
    }
    i=0;
    for(j=0; j<=n+1; j++)
    {
        ch[j][i] = 'a';
    }
    i = n+1;
    for(j=0; j<=n+1; j++)
    {
        ch[j][i] = 'a';
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            t = 0;
            if(ch[i][j+1]=='o')
                ++t;
            if(ch[i][j-1]=='o')
                ++t;
            if(ch[i+1][j]=='o')
                ++t;
            if(ch[i-1][j]=='o')
                ++t;
            //cout<<t<<endl;
            if(t%2!=0)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;

    for(i=0; i<=n+1; i++)
    {
        for(j=0; j<=n+1; j++)
        {
            cout<<ch[i][j];
        }
        cout<<endl;
    }
    cout<<"YES"<<endl;
    return 0;

}

