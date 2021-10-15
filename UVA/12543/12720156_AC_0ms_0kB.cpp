#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=-7,n,i,x=0,y=0,c=-1,j,q;
    char a[20000],b[105];
    while(1)
    {
        gets(a);

        y=0,c=0,x=0;
        n = strlen(a);


        for(i=0; i<n; i++)
        {
            if(a[i]=='E' && a[i+1]=='-' && a[i+2]=='N' && a[i+3]=='-' && a[i+4]=='D')
            {
                x = -1;
                break;
            }

            else if( (a[i]>='a' && a[i]<='z') || (a[i]>='A'&& a[i]<='Z') || (a[i]=='-') )
            {
                ++c;
            }
            else
            {

                if(t<c)
                {

                    t = c;
                    q = -1;
                    for(j=i-c; j<i; j++)
                    {
                        ++q;
                        b[q] = a[j];
                    }

                }
                 c = 0;
            }
            y=0;
        }
        if(x==-1)
            break;
    }
    for(i=0; i<=q; i++)
    {
        if(b[i]>='A'&& b[i]<='Z')
            b[i] = b[i]+' ';
        printf("%c",b[i]);
    }
    printf("\n");
    return 0;
}
