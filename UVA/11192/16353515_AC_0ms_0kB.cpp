#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,s2;
    int n,i,j,k;
    while(1)
    {
        scanf("%d",&k);
        //cout<<k<<endl;
        if(k==0)
            break;
        s2 = "";
        cin>>s;
        n = s.size();
        k = n/k;
        for(i=0; i<n; i++)
        {
            if( (i+1)%k==0)
            {
                s2+=s[i];
                for(j=s2.size()-1; j>=0; j--)
                    cout<<s2[j];
                s2 = "";
            }
            else
                s2+=s[i];
        }
        cout<<endl;
    }
    return 0;
}
