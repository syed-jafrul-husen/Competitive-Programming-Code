#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    char a;
    scanf("%c",&a);
    getchar();
    char ch[105];
    gets(ch);
    n = strlen(ch);
    for(i=0; i<n; i++)
    {
        if(a=='R')
        {
            if(ch[i]=='p')
                ch[i] = ch[i]-1;
            else if(ch[i]=='o')
                ch[i] = ch[i]-6;
            else if(ch[i]=='i')
                ch[i] = ch[i]+12;
            else if(ch[i]=='u')
                ch[i] = ch[i]+4;
            else if(ch[i]=='y')
                ch[i] = ch[i]-5;
            else if(ch[i]=='t')
                ch[i] = ch[i]-2;
            else if(ch[i]=='r')
                ch[i] = ch[i]-13;
            else if(ch[i]=='e')
                ch[i] = ch[i]+18;
            else if(ch[i]=='w')
                ch[i] = ch[i]-6;
            else if(ch[i]==';')
                ch[i] = ch[i]+49;
            else if(ch[i]=='l')
                ch[i] = ch[i]-1;
            else if(ch[i]=='k')
                ch[i] = ch[i]-1;
            else if(ch[i]=='j')
                ch[i] = ch[i]-2;
            else if(ch[i]=='h')
                ch[i] = ch[i]-1;
            else if(ch[i]=='g')
                ch[i] = ch[i]-1;
            else if(ch[i]=='f')
                ch[i] = ch[i]-2;
            else if(ch[i]=='d')
                ch[i] = ch[i]+15;
            else if(ch[i]=='s')
                ch[i] = ch[i]-18;
            else if(ch[i]=='/')
                ch[i] = ch[i]-1;
            else if(ch[i]=='.')
                ch[i] = ch[i]-2;
            else if(ch[i]==',')
                ch[i] = ch[i]+65;
            else if(ch[i]=='m')
                ch[i] = ch[i]+1;
            else if(ch[i]=='n')
                ch[i] = ch[i]-12;
            else if(ch[i]=='b')
                ch[i] = ch[i]+20;
            else if(ch[i]=='v')
                ch[i] = ch[i]-19;
            else if(ch[i]=='c')
                ch[i] = ch[i]+21;
            else if(ch[i]=='x')
                ch[i] = ch[i]+2;

        }
        if(a=='L')
        {
            if(ch[i]=='o')
                ch[i] = ch[i]+1;
            else if(ch[i]=='i')
                ch[i] = ch[i]+6;
            else if(ch[i]=='u')
                ch[i] = ch[i]-12;
            else if(ch[i]=='y')
                ch[i] = ch[i]-4;
            else if(ch[i]=='t')
                ch[i] = ch[i]+5;
            else if(ch[i]=='r')
                ch[i] = ch[i]+2;
            else if(ch[i]=='e')
                ch[i] = ch[i]+13;
            else if(ch[i]=='w')
                ch[i] = ch[i]-18;
            else if(ch[i]=='q')
                ch[i] = ch[i]+6;
            else if(ch[i]=='l')
                ch[i] = ch[i]-49;
            else if(ch[i]=='k')
                ch[i] = ch[i]+1;
            else if(ch[i]=='j')
                ch[i] = ch[i]+1;
            else if(ch[i]=='h')
                ch[i] = ch[i]+2;
            else if(ch[i]=='g')
                ch[i] = ch[i]+1;
            else if(ch[i]=='f')
                ch[i] = ch[i]+1;
            else if(ch[i]=='d')
                ch[i] = ch[i]+2;
            else if(ch[i]=='s')
                ch[i] = ch[i]-15;
            else if(ch[i]=='a')
                ch[i] = ch[i]+18;
            else if(ch[i]=='.')
                ch[i] = ch[i]+1;
            else if(ch[i]==',')
                ch[i] = ch[i]+2;
            else if(ch[i]=='m')
                ch[i] = ch[i]-65;
            else if(ch[i]=='n')
                ch[i] = ch[i]-1;
            else if(ch[i]=='b')
                ch[i] = ch[i]+12;
            else if(ch[i]=='v')
                ch[i] = ch[i]-20;
            else if(ch[i]=='c')
                ch[i] = ch[i]+19;
            else if(ch[i]=='x')
                ch[i] = ch[i]-21;
            else if(ch[i]=='z')
                ch[i] = ch[i]-2;
        }
    }
    puts(ch);
}
