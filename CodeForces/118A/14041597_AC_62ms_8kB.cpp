#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sc scanf

int main()
{
        char s[2000],b[1000];
        int i,j,t=0;
        cin>>s;
        int sz = strlen(s);
       for(i=0; i<sz;  i++)
       {
           if(s[i]=='A' || s[i]=='E'  || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y' || s[i]=='a' || s[i]=='e'  || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y')
           {
               s[i] = '.';
           }
       }
       for(i=0; i<sz; i++)
       {
           if(s[i]!='.')
           {
               b[t] = s[i];
               ++t;
           }
       }
       for(i=0; i<t; i++)
       {
           if(b[i]>='A' && b[i]<='Z')
                b[i] = b[i]+32;
           printf(".%c",b[i]);
       }

}


