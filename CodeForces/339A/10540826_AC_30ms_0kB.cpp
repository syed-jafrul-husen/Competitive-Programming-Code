#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,n,temp;
    char a[100];
    scanf("%s",a);
    n = strlen(a);
    for(i=0; i<n-1; i=i+2)
    {
        for(j=0; j<n-1; j=j+2)
        {
            if(a[j]>a[j+2])
            {
                temp = a[j];
                a[j] = a[j+2];
                a[j+2] = temp;
            }

        }
    }
    for(k=0; k<n; k++)
        printf("%c",a[k]);
}
