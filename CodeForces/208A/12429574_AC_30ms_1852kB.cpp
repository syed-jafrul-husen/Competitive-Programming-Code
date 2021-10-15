#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,i,j,n,c=1;
    char ch[205];
    scanf("%s",ch);
    n = strlen(ch);
    //a = n%3;
    for(i=0; i<n; i++)
    {
        if(ch[i]=='W' && ch[i+1]=='U' && ch[i+2]=='B')
        {
            i = i + 2;
            if(c>1)
            {
                c = 1;
                printf(" ");
            }

        }
        else
        {
            ++c;
            printf("%c",ch[i]);
        }

    }
    printf("\n");
}
