#include<bits/stdc++.h>
using namespace std;
int arr[6500001]={0};
vector<int>answer;
void Function()
{
	int j;
	for(j=0;j<=6500000;j++)
	{
		answer.push_back(0);
	}
	for(j=1;j<=6500000;j++)
	{
		for(int k=1;k*j<=6500000;k++)
		{
			arr[j*k]++;
		}
	}
	answer[0]=0;
	answer[1]=arr[1];
	for(j=2;j<=6500000;j++)
	{
		answer[j]=arr[j]+answer[j-1];
	}
}

int main()
{
	Function();
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int ans=lower_bound(answer.begin(),answer.end(),n)-answer.begin();
    	cout<<ans<<endl;
	}
}
