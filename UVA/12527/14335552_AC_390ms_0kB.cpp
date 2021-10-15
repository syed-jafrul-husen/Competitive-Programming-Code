#include<bits/stdc++.h>
using namespace std;

long long i,j,k,a,b,c,t,n,m;
//string s2,s3,s4="",str;
int main()
{
   while(cin>>a>>b)
   {
       n = b-a+1;
       t = 0;
       c = 0;
       for(i=a; i<=b; i++)
       {
           t = 0;
           stringstream st;
           st<<i;
           string s = st.str();
           m = s.size();
           sort(s.begin(),s.end());
           for(j=0; j<m-1; j++)
           {
               if(s[j]==s[j+1])
                t = 1;
           }
           if(t==1)
            ++c;
       }
       cout<<n-c<<endl;
   }
}
