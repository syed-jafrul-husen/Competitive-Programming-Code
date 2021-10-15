#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,c=0;
    char ch[100];
    scanf("%d",&n);;
    for(i=0; i<n; i++)
    {
        scanf("%s",ch);
        if(ch[0]=='+'||ch[1]=='+')
            ++c;
        else if(ch[1]=='+'||ch[2]=='+')
            c++;
        else if(ch[0]=='-'||ch[1]=='-')
            --c;
        else if(ch[1]=='-'||ch[2]=='-')
            c--;
    }
    printf("%d\n",c);
}
