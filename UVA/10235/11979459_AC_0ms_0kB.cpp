#include<bits/stdc++.h>
using namespace std;

#define sz 1000002
long long bs[sz+2];

void sieve()
{
    long long i,j;
    bs[0] = 1;
    bs[1] = 1;
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
    long long a,b,num,original,reversed,reminder,i;
    char ch[25];
    while(  scanf("%lld",&num)!=EOF )
    {
        b=0;
        a = bs[num];
        if(a==0)
            b++;
        original = num;
        if(b==1)
        {
            reversed = 0;
            while(num)
            {
                reminder = num%10;
                reversed = reminder + (reversed*10);
                num = num/10;
            }
            a = bs[reversed];
            if(a==0)
                b++;
        }
        if(original==reversed && b==2)
            printf("%lld is prime.\n",original);
        else if(original!=reversed && b==2)
            printf("%lld is emirp.\n",original);
        else if((original==reversed && b==1) || (original!=reversed && b==1 || b==1))
            printf("%lld is prime.\n",original);
        else
            printf("%lld is not prime.\n",original);

    }
    return 0;

}
