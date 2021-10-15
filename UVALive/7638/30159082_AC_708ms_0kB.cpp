#include<bits/stdc++.h>
using namespace std;

#define N 1000006

int flag[N+5],prime[N+5],id[N+5],ar[N+5],visited[N];
int total;


void sieve()
{
    int i,j,val;
    val = sqrt(N);
    flag[1] = 1;
    for(i=2; i<val; i++)
    {
        if(flag[i]==0)
        {
            for(j=i; i*j<=N; j++)
            {
                flag[i*j] = 1;
            }
        }
    }
    for(i=2; i<N; i++)
        if(flag[i]==0)
        prime[total++] = i;
}

void initialize()
{
    for(int i=0; i<=N; ++i)
    {
        visited[i] = 0;
        id[i] = i;
    }
}

int root(int x)
{
    while(id[x] != x)
    {
        id[x] = id[id[x]];
        x = id[x];
    }
    return x;
}

void Union(int x, int y)
{
    int p = root(x);
    int q = root(y);
    id[p] = id[q];
}


void Divisor(int n)
{
    int x = n;
    for(int i=0; prime[i]*prime[i]<=n; i++)
    {
        if(n%prime[i]==0)
        {
            while(n%prime[i]==0)
            {
                n/=prime[i];
            }
            Union(x,prime[i]);
        }
    }
    if(n>1)
    {
        Union(x,n);
    }
}

int main()
{
    sieve();
    int t,n,i,x;
    cin>>t;
    for(int tc=1; tc<=t; tc++)
    {
        initialize();
        cin>>n;
        int c = 0;
        for(i=1; i<=n; i++)
        {
            cin>>x;
            ar[i] = x;
            if(x==1)
                c+=1;
            if(flag[x])
            {
                Divisor(x);
            }
        }
        for(i=1; i<=n; i++)
        {
            if(ar[i]>1)
            {
                int top = root(ar[i]);
                if(!visited[top])
                    ++c;
                visited[top] = 1;
            }
        }
        printf("Case %d: %d\n",tc,c);
    }
}
