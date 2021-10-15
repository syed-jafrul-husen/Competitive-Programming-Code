#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[1000007];
    long long n,i;
    scanf("%s",&ch);
    n = strlen(ch);
    printf("%s",ch);
    for(i=n-1; i>=0; i--)
    {
        printf("%c",ch[i]);
    }
    printf("\n");
}
