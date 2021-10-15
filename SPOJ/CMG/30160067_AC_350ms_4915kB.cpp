#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,t,m,i,j,k,c=0,c2,p,mx;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        mx = 0,c = 0;

        stack<ll>st;

        scanf("%lld",&n);
        printf("Case %lld:\n",i);
        while(n--)
        {
            char ch[100];
            scanf("%s",&ch);
            if(ch[0]=='A')
            {
                scanf("%lld",&k);
                if(k>mx)
                    mx = k;
                st.push(mx);
            }
            else if(ch[0]=='Q')
            {
                if(!st.empty())
                {
                    k = st.top();
                    printf("%lld\n",k);
                }
                else
                {
                    mx = 0;
                    printf("Empty\n");
                }
            }
            else
            {
                if(!st.empty())
                {
                    st.pop();
                }
                if(!st.empty())
                    {
                      if(st.top()<mx)
                        mx = st.top();
                    }
                else
                    mx = 0;
            }
        }
    }
}
