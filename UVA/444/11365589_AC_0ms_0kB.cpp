#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,a;
    char ch[500],c;
    while(gets(ch))
    {
        n = strlen(ch);
        for(i=n-1; i>=0; i--)
        {
            if(ch[i]>='0' && ch[i]<='9')
            {
                if(ch[i]=='1')
                {
                    a = (char)(100+(ch[i-1]-'0')*10+(ch[i-2]-'0'));
                    c = a;
                    printf("%c",c);
                    i = i-2;
                }
                else
                {
                    a = (char)(10*(ch[i]-'0')+(ch[i-1]-'0'));
                    c = a;
                    printf("%c",c);
                    --i;
                }
            }
            else
            {
                a = (int)ch[i];
                while(a!=0)
                {
                    printf("%d",a%10);
                    a = a/10;
                }
            }

        }
        printf("\n");
    }
}
