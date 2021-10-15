#include<bits/stdc++.h>
using namespace std;
#define ll long long

#define nSize 1000000
#define pSize 1000000
bool flag[nSize+5];
int prime[pSize+5];
void sieve()
{
    int i,j,total=0,val;
    val = sqrt(nSize)+1;
    flag[1] = 1;//if a is not prime;
    for(i=2; i<val; i++)
        if(flag[i]==0)
            for(j=i; i*j<=nSize; j++)
                flag[i*j]=1;
    for(i=2; i<nSize; i++)
        if(flag[i]==0)
            prime[total++]=i;
}

int main()
{
    sieve();
    int n,i,j,k;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        vector<int>vt;
        for(i=1; i<=n; i++)
            vt.push_back(i);
        int k = 0,ind = 0;
        while(n>1)
        {
            k = abs(k+(prime[ind++]%n)-1 )%n;
            //cout<<k<<" "<<vt[k]<<endl;
            vt.erase(vt.begin()+k);
            n--;
        }
        cout<<vt[0]<<endl;
    }

}
