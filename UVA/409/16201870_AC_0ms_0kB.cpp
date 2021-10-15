#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n,m,i,j,k,index=0,mx=0,c;
    while(cin>>n>>m)
    {
        mx=0;
        string s[10000],s2;
        string str[1000];

        int a[10000];
        for(i=0; i<n; i++)
        {
            cin>>s[i];
        }
        int t;
        //  cout<<m<<endl;
        getchar();
        for(i=0; i<m; i++)
        {

            getline(cin,str[i]);
            // getchar();
            k = str[i].size();
            char ch[10000];
            //cout<<str[i]<<endl;
            for(j=0; j<k; j++)
                ch[j] = str[i][j];
            ch[j] = '.';
            ++j;
            ch[j] = '\0';
            //cout<<ch<<endl;

            c = 0;
            s2 = "";
            //cout<<c<<endl;
            k = strlen(ch);
            for(t=0; t<k; ++t)
            {
                if( (ch[t]>='a' && ch[t]<='z') || (ch[t]>='A' && ch[t]<='Z') )
                    s2+=ch[t];
                else
                {
                    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
                    //cout<<s2<<endl;
                    for(j=0; j<n; j++)
                    {
                        if(s[j]==s2)
                            ++c;
                    }
                    s2 = "";
                }
            }
            if(c>mx)
                mx = c;
            a[i] = c;

            //cout<<" "<<i+1<<" "<<mx<<" "<<c<<endl;
        }
        //cout<<str[1]<<endl;
        ++index;
        cout<<"Excuse Set #"<<index<<endl;
        for(i=0; i<m; i++)
        {
            if(a[i]==mx)
                cout<<str[i]<<endl;
            //cout<<a[i]<<endl;
        }
        cout<<endl;
        //getchar();

    }
}
