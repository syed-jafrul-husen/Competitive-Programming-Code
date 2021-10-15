#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch[125];
    int i,n,t,c=0;
    scanf("%s",ch);
    n = strlen(ch);
    for(i=0; i<n; i++)
    {
        if(ch[i]=='h')
        {
            t = i+1;
            c++;
            break;
        }
    }
    for(i=t; i<n; i++)
    {
        if(ch[i]=='e')
        {
            t = i+1;
            c++;
            break;
        }
    }
    for(i=t; i<n; i++)
    {
        if(ch[i]=='l')
        {
            t = i+1;
            c++;
            break;
        }
    }
    for(i=t; i<n; i++)
    {
        if(ch[i]=='l')
        {
            t = i+1;
            c++;
            break;
        }
    }
    for(i=t; i<n; i++)
    {
        if(ch[i]=='o')
        {
            t = i+1;
            c++;
            break;
        }
    }
    if(c==5)
        printf("YES\n");
    else
        printf("NO\n");
}
