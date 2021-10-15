#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,l=0,s=0;
    int Q=9,R=5,B=3,N=3,P=1;
    int q=9,r=5,b=3,n=3,p=1;

    char a[8][8];

    for(i=0; i<8; i++)
    {
        for(j=0; j<8; j++)
        {
            scanf("%c",&a[i][j]);
        }
        getchar();
    }

    for(i=0; i<8; i++)
    {
        for(j=0; j<8; j++)
        {
            if(a[i][j]=='q')
                s = s+9;
            else if(a[i][j]=='r')
                s = s+5;
            else if(a[i][j]=='b')
                s = s+3;
            else if(a[i][j]=='n')
                s = s+3;
            else if(a[i][j]=='p')
                s = s+1;
            else if(a[i][j]=='Q')
                l = l+9;
            else if(a[i][j]=='R')
                l = l+5;
            else if(a[i][j]=='B')
                l = l+3;
            else if(a[i][j]=='N')
                l = l+3;
            else if(a[i][j]=='P')
                l = l+1;
        }
    }
    if(l>s)
        printf("White\n");
    else if(l<s)
        printf("Black\n");
    else
        printf("Draw\n");
}
