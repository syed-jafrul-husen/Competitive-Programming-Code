#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,c=0;
    char a[20];
    while(1)
    {
        ++c;
        scanf("%s",&a);
        //getchar();
        if(strcmp(a,"#")==0)
            break;
        else
        {
            if(strcmp(a,"HELLO")==0)
                printf("Case %d: ENGLISH\n",c);
            else if(strcmp(a,"HOLA")==0)
                printf("Case %d: SPANISH\n",c);
            else if(strcmp(a,"HALLO")==0)
                printf("Case %d: GERMAN\n",c);
            else if(strcmp(a,"BONJOUR")==0)
                printf("Case %d: FRENCH\n",c);
            else if(strcmp(a,"CIAO")==0)
                printf("Case %d: ITALIAN\n",c);
            else if(strcmp(a,"ZDRAVSTVUJTE")==0)
                printf("Case %d: RUSSIAN\n",c);
            else
                printf("Case %d: UNKNOWN\n",c);
        }


    }
    return 0;
}
