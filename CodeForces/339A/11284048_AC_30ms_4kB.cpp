#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,a,j;
    char ch[108],temp[108];
    gets(ch);
    n = strlen(ch);
    a = n/2+1;
    for(j=0; j<a+1; j++)
    {
        for(i=0; i<n-2; i=i+2)
        {
            if(ch[i]>ch[i+2])
            {
                temp[i] = ch[i];
                ch[i] = ch[i+2];
                ch[i+2] = temp[i];
            }
        }
    }
    puts(ch);
}
