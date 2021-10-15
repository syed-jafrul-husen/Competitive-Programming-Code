#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j,t,c,original,reminder,reversed,num,org;
    scanf("%lld",&t);
    for(i=0; i<t; i++)
    {
        c = 0;
        reversed = 0;
        scanf("%lld",&num);
        while(1)
        {

            original = num;
            reversed = 0;
            while(num!=0)
            {
                reminder = num%10;
                reversed = reminder + reversed *10;
                num = num/10;
            }
            if(reversed==original)
            {
                printf("%lld %lld\n",c,original);
                break;
            }
            else
            {
                num = original + reversed;
            }
            ++c;

        }

    }
}
