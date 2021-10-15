#include<bits/stdc++.h>
using namespace std;
#define nSize 36000
#define pSize 36000

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

int dt[42000];
int sz = 0;
void determinate()
{
    int i,j;
    for(i=0; i<total-3; i++)
    {
        int k = a[i+1]-a[i];
        if( a[i+1]-a[i]==a[i+2]-a[i+1])
        {
            //cout<<a[i]-a[i-1]<<" "<<a[i-1]-a[i-2]<<"   &&   "<<a[i]-a[i-1]<<"  "<<a[i-2]-a[i-3]<<endl;
            // cout<<a[i]<<" "<<a[i+1]<<" "<<a[i+2]<<endl;
            dt[sz++] = a[i];
            for(j=i; j<total-3; j++)
            {
                if(k==a[j+1]-a[j])
                {
                    dt[sz++] = a[j+1];
                    i = j;
                }
                else
                {
                    break;
                }
            }
            //dt[sz++] = -1;


        }

    }
}



int main()
{
    int i,k,b,t,x,y,j;
    sieve();
    determinate();
    //cout<<sz<<endl;
  //  freopen("output.txt","w",stdout);


    vector<int>vt;
    while(scanf("%d%d",&x,&y)==2)
    {
        if(x==0 && y==0)
            break;
        if(x>y)
            swap(x,y);
       // t = 0;
        vector<int>vt;
        for(i=0; ; )
        {
            vt.clear();
            if(dt[i]>y) break;
            int df=dt[i+1]-dt[i],cnt=0,id=i+1;

            vt.push_back(dt[i]);
            vt.push_back(dt[i+1]);

            while(dt[id+1]-dt[id]==df)
            {
                vt.push_back(dt[id+1]);
                id++,cnt++;
            }
            if(cnt==0)
            {
                i++;
                continue;
            }
            i=id;
            if(*vt.begin()<x || *vt.rbegin()>y)
                continue;

            printf("%d", vt[0]);
            int sz = vt.size();
            for(j=1; j<sz; j++)
                printf(" %d", vt[j]);
            printf("\n");
        }
    }
}
