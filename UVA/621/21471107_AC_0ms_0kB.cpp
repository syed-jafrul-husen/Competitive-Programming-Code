#include<bits/stdc++.h>
using namespace std;
char ch[1000006];
int main()
{
    int t,te=0,i,j,n;
    scanf("%d",&t);
    while(t--)
    {
        string s;
        scanf("%s",ch);
        s = string(ch);
        n = s.size();
        if(s=="1" || s=="4" || s=="78")
            printf("+\n");
        else if(s[n-1]=='5' && s[n-2]=='3')
            printf("-\n");
        else if(s[0]=='9' && s[n-1]=='4')
            printf("*\n");
        else
            printf("?\n");
    }
}
