#include<bits/stdc++.h>
using namespace std;
char ch[1000005];
int main()
{
    int n,i,j,ln,t,z;
    int x[10005];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%s",ch);
        ln = strlen(ch);
         z = 0;
        for(j=0; j<ln; j++)
        {
            if(ch[j]=='C' && (ch[j-1]>='0' && ch[j-1]<='9'))
            {
                z = j;
                break;
            }

        }
        if((ch[0]=='R') && (ch[z]=='C'))
        {
            int a=0,b=1,c=0,d=0,k=0,p=1;
            for(j=ln-1; j>=0; j--)
            {
                if(ch[j]=='C')
                {
                    t = j-1;
                    break;
                }
                else
                {
                    a = a+b * (ch[j]-'0');
                    p*=10;
                    b = p;
                }

            }
            //printf("%d\n",a);
            while(a>26)
            {

                d = a%26;
                a = a/26;
                if(d==0)
                {
                    x[k] = 26+64;
                    a = a-1;
                }
                else
                {
                    x[k] = d+64;
                }

                ++k;
            }
            x[k] = a+64;
            //printf("%d\n",k);
            for(j=k; j>=0; j--)
            {
                printf("%c",x[j]);
            }

            for(j=1; j<=t; j++)
            {
                if(ch[j]=='R')
                {
                    t = j-1;
                    break;
                }
                else
                {
                    printf("%c",ch[j]);
                }
            }
            printf("\n");
        }
        else
        {
            int a=0,b=1,c=0,d=0,k=0,p=1,s;
            printf("R");
            for(j=ln-1; j>=0; j--)
            {
                if(ch[j]>='A' && ch[j]<='Z')
                {
                    t = j;
                    break;
                }
                else
                {
                    a = a+b * (ch[j]-'0');
                    p*=10;
                    b = p;
                }
            }

            printf("%d",a);
            a=0,b=1,c=0,d=0,k=0,p=1;
            printf("C");
            for(j=t; j>=0; j--)
            {
                a = a+b * ((int)ch[j]- 64);
                p*=26;
                b = p;
            }
            printf("%d",a);
            printf("\n");
        }

    }
}
