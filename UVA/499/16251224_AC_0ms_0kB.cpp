#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k,m,c;
    string s,s2;
    while(getline(cin,s))
    {
        n = s.size();
        s2 = "";
        sort(s.begin(),s.end());
        s+=".";
        m = 1;
        c = 1;
        for(i=0; i<n; i++)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
            {
                 if(s[i]==s[i+1])
                    ++c;
                 else
                 {
                     m = max(m,c);
                     c = 1;
                 }
            }
            else
                c = 1;
        }
        c = 1;
        for(i=0; i<n; i++)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
            {
                 if(s[i]==s[i+1])
                    ++c;
                 else
                 {
                     if(c==m)
                        s2+=s[i];
                     c = 1;
                 }
            }
            else
                c = 1;
        }
        cout<<s2<<" "<<m<<endl;
    }
}
