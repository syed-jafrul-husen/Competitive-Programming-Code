#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    string s;

    while(1)
    {
        char ch[100000];
        gets(ch);
        int n,x,i;
        s = "";
        n = strlen(ch);
        for(i=0; i<n; i++)
            s = s+ch[i];
        if(s=="*")
            break;
        x = 0;
        for(i=1; i<n; i++)
        {
            if(ch[i-1]==' ' && (tolower(ch[i])==(ch[0]) || toupper(ch[i])==ch[0]))
            {
                x = 0;
            }
            else if(ch[i-1]==' '){
                x = 1;
                break;}
        }
        if(x==0)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;

    }

}

