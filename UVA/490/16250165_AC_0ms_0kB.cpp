#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[1006][1006];
    memset(s,0,sizeof(s));
    int n,i,j,k,a[1006],m=0;
    i = 0;
    while(gets(s[i])!=NULL)
    {
        k = strlen(s[i]);
        m = max(m,k);
        ++i;

    }
    n = i;
    //cout<<m<<endl<<endl;
    //cout<<endl<<endl<<endl;

    for(i=0; i<m; i++)
    {
        for(j=n-1; j>=0; j--)
        {
            if(s[j][i]==0)
                printf(" ");
            else
                cout<<s[j][i];
        }
       
            cout<<endl;
    }
}