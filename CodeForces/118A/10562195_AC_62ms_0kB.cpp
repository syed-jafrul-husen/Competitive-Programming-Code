#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,j,count=0,k,n2;
    char a[100];
    char b[100];
    gets(a);
    n = strlen(a);
    for(i=0; i<n; i++)
    {
        if(a[i]=='A' || a[i]=='O' || a[i]=='Y' || a[i] == 'E' || a[i]=='U' || a[i]== 'I' || a[i]=='a' || a[i]=='o' || a[i]=='y' || a[i] == 'e' || a[i]=='u' || a[i]== 'i')
        {
            a[i] = a[i];
        }
        else
        {
            for(j=i; ; j++)
            {
                b[j]=a[i];
                if(b[j]>='A' && b[j]<='Z')
                    b[j]=b[j]+32;
                printf(".%c",b[i]);
                break;
            }
        }

    }
    printf("\n");

}
