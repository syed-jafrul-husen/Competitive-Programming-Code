#include<bits/stdc++.h>
using namespace std;

int MOD = 1000000007;

int main()
{
    long long n,k=0,i;
    cin>>n;
	for(i=1;i<n;i++)
	{
		if(i%2==1)
            k=((k+1)*3)%MOD;
		else
            k=((k-1)*3)%MOD;
	}
    cout<<k<<endl;
}
