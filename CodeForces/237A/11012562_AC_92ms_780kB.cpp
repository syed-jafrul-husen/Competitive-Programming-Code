#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=1,i,ans=1;
    scanf("%d",&t);
    int h[t],m[t];
    for(i=0; i<t; i++)
    {
        scanf("%d%d",&h[i],&m[i]);
        if(h[i]==h[i-1] && m[i]==m[i-1])
            c++;

        if(c>=ans)
        {
            ans = c;
        }
        if(h[i]!=h[i-1] || m[i]!=m[i-1])
            c = 1;
    }
    printf("%d\n",ans);
}
