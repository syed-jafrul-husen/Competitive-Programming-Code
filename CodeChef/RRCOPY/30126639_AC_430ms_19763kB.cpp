#include <bits/stdc++.h>
using namespace std;
#define ll long long
map<ll,ll>mm;

int main() {
	ll i,j,k,n,m,t;
	cin>>k;
	while(k--)
	{
	    t=0;
	    cin>>n;
	    ll arr[n];
	    for(i=0;i<n;i++){
            cin>>arr[i];
	    }
	    vector<ll>v;
	    for(i=0;i<n;i++)
	    {
	        if(mm[arr[i]]==0){
                mm[arr[i]]=1;
                t++;
	        }
	    }
	    mm.clear();
	    cout<<t<<endl;
	}
}
