#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[15];
    int i=1;
    while(1)
    {
        scanf("%s",&a);
        if(a[0]=='H')
            printf("Case %d: Hajj-e-Akbar\n",i);
        else if(a[0]=='U')
            printf("Case %d: Hajj-e-Asghar\n",i);
        i++;
        if(a[0]=='*')
            break;
    }

}
