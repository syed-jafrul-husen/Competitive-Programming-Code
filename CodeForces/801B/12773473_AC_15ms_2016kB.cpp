#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    string s1,s2;
    cin>>s1>>s2;
    for(i=0; i<s1.size(); i++)
    {
        if(s2[i]>s1[i])
        {
             printf("-1\n");
             return 0;
        }

    }
    cout<<s2<<endl;
    return 0;
}
