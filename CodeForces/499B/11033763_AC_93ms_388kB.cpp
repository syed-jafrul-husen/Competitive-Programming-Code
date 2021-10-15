#include<bits/stdc++.h>
using namespace std;

struct db
{
    char str1[50];
    char str2[50];
};
int main()
{
    int n,m,i,a,b,j;
    scanf("%d%d",&n,&m);
    db arr[m+3];
    char str[50];

    for(i=0; i<m; i++)
    {
        scanf("%s",arr[i].str1);
        scanf("%s",arr[i].str2);
    }


    for(i=0; i<n; i++)
    {
        scanf("%s",str);
        for(j=0; j<m; j++)
        {
            if( (strcmp(arr[j].str1,str)==0) || (strcmp(arr[j].str2,str)==0)  )
            {
                a = strlen(arr[j].str1);
                b = strlen(arr[j].str2);
                if(a<=b)
                    printf("%s ",arr[j].str1);
                else
                    printf("%s ",arr[j].str2);
                break;
            }
        }
    }
    printf("\n");
}
