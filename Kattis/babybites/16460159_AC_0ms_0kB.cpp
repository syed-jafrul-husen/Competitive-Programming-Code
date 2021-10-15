#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,t,i,j,k,l;
    scanf("%lld",&n);
    string s[n+2];
    for(i=0; i<n; i++)
    {
        cin>>s[i];
    }
    for(i=1; i<=n; i++)
    {
        if(s[i-1][0]>='0' && s[i-1][0]<='9')
        {
            stringstream geek(s[i-1]);
            int x = 0;
            geek>>x;
            if(x!=i)
            {
                printf("something is fishy");
                return 0;
            }
        }
    }
 printf("makes sense");

}
