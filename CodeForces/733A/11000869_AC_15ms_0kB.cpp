#include<stdio.h>
#include<string.h>
int main()
{
    char ch[105];
    int n,i,c=0,ans=1,f=1;
    gets(ch);
    n = strlen(ch);
    for(i=0; i<n; i++)
    {
        if(ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U' || ch[i]=='Y')
        {
            c++;
            if(c>1)
            {
                if(ans>f)
                    f = ans;
                ans = 1;
                c=1;
            }

        }
        else
            ans++;
        if(i==n-1)
        {
            if(c>0)
            {
                if(ans>f)
                    f = ans;
            }

        }
        if( (ch[0]!='A') || (ch[0]!='E') || (ch[0]!='I') || (ch[0]!='O') || (ch[0]!='U') || (ch[0]!='Y') )
        {
            if(c>0)
            {
                if(ans>f)
                    f = ans;
                ans = 1;
                c=0;
            }
        }
        if( (c==0) &&  (i==(n-1)) )
        {
            if(ans>f)
                f = ans;
        }
    }
    printf("%d\n",f);
}
