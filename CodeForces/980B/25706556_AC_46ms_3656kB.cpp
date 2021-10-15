#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r=4,c,k,i,j,x,y;
    cin>>c>>k;

    if( k>2*(c-2))
        cout<<"NO"<<endl;
    else
    {
        char ch[6][c+2];
        for(i=0; i<4; i++)
            for(j=0; j<c; j++)
                ch[i][j] = '.';
        for(i=1; i<3; i++)
        {
            for(j=1; j<c/2 && k>1; j++,k-=2)
            {
                ch[i][j] = '#';
                ch[i][c-j-1] = '#';
            }
        }
        if(k>0)
            ch[1][c/2] = '#';
        if(k>1)
            ch[2][c/2] = '#';
        cout<<"YES"<<endl;
        for(i=0; i<4; i++)
        {
            for(j=0; j<c; j++)
                cout<<ch[i][j];
            cout<<endl;
        }
    }

}
