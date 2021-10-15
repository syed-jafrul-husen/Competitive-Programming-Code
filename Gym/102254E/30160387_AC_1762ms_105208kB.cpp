#include<bits/stdc++.h>
using namespace std;
#define ll long long

char s[10000027];
int main()
{
    int n,t,m,i,j,k,c=0,c2,p,mx;
    scanf("%d",&t);
    unordered_map<string,int>mp;
    vector<string>vt;
    while(t--)
    {
        scanf("%s",&s);
        if(strlen(s)>=4 && mp.count(s))
        {
                vt.push_back(s);
        }
        mp[s] = 1;
    }
    n = vt.size();
    if(n==0)
    {
        printf("SAFO\n");
        return 0;
    }
    printf("%d\n",n);
    for(i=0; i<n; i++)
    {
        printf("%s\n",vt[i].c_str());
    }
}
