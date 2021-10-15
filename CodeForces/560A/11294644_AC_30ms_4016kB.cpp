#include<bits/stdc++.h>
using namespace std;
int arr[1000006];
int main()
{
    int i,n,c=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==1)
        {
            ++c;
            break;
        }
    }
    if(c==1)
        printf("-1\n");
    else
        printf("1\n");
}
