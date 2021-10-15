#include<bits/stdc++.h>
using namespace std;
#define nSize 1000050
#define pSize 1000050

int flag[nSize+5];
int a[pSize+5];
int total = 0;
void sieve()
{
    int i,j,val;
    val = sqrt(nSize)+1;
    flag[1] = 1;
    for(i=2; i<val; i++)
        if(flag[i]==0)
            for(j=i; i*j<=nSize; j++)
                flag[i*j]=1;

    for(i=2; i<nSize; i++)
        if(flag[i]==0)
            a[total++]=i;
}


int main()
{
    int i,k,b,t,x,y,j;
    sieve();
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&x,&y);
        map<int,int>mp;
        map<int,int>::iterator it;
        if(x>y)
            swap(x,y);
        for(i=0; i<total-1; i++)
        {
            if( (a[i]>=x && a[i]<=y) && (a[i+1]>=x && a[i+1]<=y) )
            {
                k = a[i+1]-a[i];
                ++mp[k];
            }
            else if(a[i]>y)
                break;
        }
        int mx = 0,res;
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            if(it->second>mx)
            {
                mx = it->second;
                res = it->first;
            }
        }
        //cout<<mx<<endl;
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            if(it->second==mx && it->first!=res)
            {
                mx = 0;
                res = it->first;
                break;
            }
        }
       // cout<<mx<<endl;
        if(mx==0)
        {
            printf("No jumping champion\n");
        }
        else
        {
            printf("The jumping champion is %d\n",res);
        }
        mp.clear();
    }

}
