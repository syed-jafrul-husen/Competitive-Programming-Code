#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,m,n,arr[100],i,j,k;
    char str[1000007],ch,ch2;
    scanf("%d",&c);
    for(i=0; i<c; i++)
    {
        getchar();
        gets(str);
        m = strlen(str);
        for(j=65; j<91; j++)
        {
            arr[j] = j;
        }
        scanf("%d",&n);
        for(j=0; j<n; j++)
        {
            getchar();
            scanf("%c %c",&ch,&ch2);
            a = (int)ch2;
            b = (int)ch;

            for(k=65; k<91; k++)
            {
                if(arr[k]==a)
                    arr[k] = b;
            }
        }
        for(j=0; j<m; j++)
        {
            if(isalpha(str[j]))
                printf("%c",arr[str[j]]);
            else
                printf("%c",str[j]);
        }
        printf("\n");
    }
    return 0;
}