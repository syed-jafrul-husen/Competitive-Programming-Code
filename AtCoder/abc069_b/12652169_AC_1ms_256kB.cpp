#include <bits/stdc++.h>
using namespace std;

int a[1000000],b[1000000];

int main()
{
    int n,b;
    char a[103];
    scanf("%s",&a);
    n = strlen(a);
    printf("%c",a[0]);
    b = n-2;
    printf("%d",b);
    printf("%c\n",a[n-1]);
    return 0;
}
