#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i=1,j,a,b,c,ans=0,k=4;
    scanf("%d%d%d",&a,&b,&c);
    for(i=0; i<c; i++)
    {
        ans = ans+(a*2)+(b*2)-k;
        a-=4;
        b-=4;
        //k = powl(k,2);
    }
    printf("%d\n",ans);

    return 0;
}
