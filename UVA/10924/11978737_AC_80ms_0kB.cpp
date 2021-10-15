#include<bits/stdc++.h>

#define sz 10000000
long long bs[sz+2];

void sieve()
{
    long long i,j;
    for(i=4; i<sz; i+=2)
        bs[i]=1;
    for(i=3; i*i<sz; i+=2)
    {
        if(!bs[i])
        {
            for(j=i*i; j<sz; j=j+(2*i))
            {
                bs[j]=1;
            }
        }

    }
}

int main()
{
    sieve();
    int a,b,i,n,sum;
    char ch[25];
    while(scanf("%s",ch)!=EOF)
    {
        sum = 0;

        n = strlen(ch);
        for(i=0; i<n; i++)
        {
            if(ch[i]>='A' && ch[i]<='Z')
            {
                sum = sum +(ch[i]-38);
            }
            else if(ch[i]>='a' && ch[i]<='z')
            {
                sum = sum +(ch[i]-96);
            }
        }
        a = bs[sum];
        if(a==0)
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");

    }
    return 0;
}
