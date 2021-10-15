#include<bits/stdc++.h>
using namespace std;
 
int prime[100000];
bool visit[100000];
int a,b,c,d,n,m;
 
struct Node
{
    int p[4];
    int step;
};
 
void sieve()
{
    int i,j,k,l;
    prime[2] = 1;
    int sq = sqrt(10020);
    for(i=3; i<=10020; i+=2)
    {
        prime[i] = 1;
    }
    for(i=3; i<sq; i++)
    {
        if(prime[i])
        {
            for(j=i+i; j<10020; j+=i)
                prime[j] = 0;
        }
    }
 
 
}
 
int bfs()
{
    Node st,now;
    memset(visit,false,sizeof(visit));
    queue<Node>Q;
    while(!Q.empty())
        Q.pop();
    visit[m] = true;
    st.p[0] = m/1000;
    st.p[1] = (m/100)%10;
    st.p[2] = (m/10)%10;
    st.p[3] = m%10;
    st.step = 0;
    Q.push(st);
    while(!Q.empty())
    {
        st = Q.front();
        Q.pop();
        if(st.p[0]==a && st.p[1]==b && st.p[2]==c && st.p[3]==d)
            return st.step;
        for(int i=0; i<=3; i++)
        {
            for(int j=0; j<10; j++)
            {
                if(st.p[i]==j)
                    continue;
                if(i==0 && j==0)
                    continue;
                now.p[0] = st.p[0];
                now.p[1] = st.p[1];
                now.p[2] = st.p[2];
                now.p[3] = st.p[3];
                now.p[i] = j;
                int x = (now.p[0]*1000) + (now.p[1]*100) + (now.p[2]*10) + now.p[3];
                if(prime[x] && !visit[x])
                {
                    visit[x] = true;
                    now.step = st.step+1;
                    Q.push(now);
                }
            }
        }
    }
    return -1;
}
 
int main()
{
    sieve();
    int t,i,j,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&m,&n);
        a = n/1000;
        b = (n/100)%10;
        c = (n/10)%10;
        d = n%10;
        int ans = bfs();
        if(ans==-1)
            printf("Impossible\n");
        else
            printf("%d\n",ans);
    }
    return 0;
}
 