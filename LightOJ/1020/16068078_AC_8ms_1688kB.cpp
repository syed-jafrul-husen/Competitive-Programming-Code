#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long u,v,q,t,i,j,k,x1,x2,x3,x4,y1,y2,y3,n,y4;
    scanf("%lld",&t);
    char s[100];
    for(i=0; i<t; i++)
    {
        scanf("%lld",&n);
        getchar();
        scanf("%s",&s);
        getchar();
        printf("Case %lld: ",i+1);
        //cout<<"Case "<<i+1<<": ";
        if(s[0]=='A')
        {
            if(n%3==1)
                printf("Bob\n");

            else
                printf("Alice\n");

        }
        else
        {
            if(n%3==0)
            {
                printf("Alice\n");
            }
            else
                printf("Bob\n");
        }
    }
}
