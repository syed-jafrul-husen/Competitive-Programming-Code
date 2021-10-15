#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,c=0,c2=0,t=0;
    char ch[220],a[100],b[100];
    scanf("%d",&n);
    getchar();
    scanf("%s",&ch);
    getchar();
    m = n*2;
    for(i=0; i<n; i++)
    {
        a[i] = ch[i];
    }
    for(i=n; i<m; i++)
    {
        b[t] = ch[i];
        ++t;
    }
    sort(a,a+n);
    sort(b,b+n);
    for(i=0; i<n; i++)
    {
        if(a[i]>b[i])
            ++c;
        if(a[i]<b[i])
            ++c2;
    }
    if(c==n || c2==n)
    {
        printf("YES\n");
        return 0;
    }
    else
        printf("NO\n");

    return 0;

}
