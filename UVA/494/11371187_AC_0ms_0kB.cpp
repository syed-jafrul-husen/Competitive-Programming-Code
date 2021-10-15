#include<bits/stdc++.h>
using namespace std;

char str[100000];

int main()
{
    int i,n,c;
    while(gets(str))
    {
        c = 0;
        n = strlen(str);
        for(i=0; i<n; i++)
        {
            if( (str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')  )
            {
                ++c;
                while( (str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') )
                {
                    ++i;
                }
                --i;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
