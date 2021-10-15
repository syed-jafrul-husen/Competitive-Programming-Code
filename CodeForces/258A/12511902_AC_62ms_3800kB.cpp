#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n,i,j,c=0,t=-1;
    char a[1000000],b[1000005];
    scanf("%s",a);
    getchar();
    n = strlen(a);
    for(i=0; i<n; i++)
    {

        if(a[i]=='0' && c==0)
        {
            c = 1;
            continue;
            

        }
        ++t;
        b[t] = a[i];
    }
    ++t;
    if(t==n)
        --t;
    for(i=0; i<t; i++)
        printf("%c",b[i]);
    printf("\n");
    return 0;

}

