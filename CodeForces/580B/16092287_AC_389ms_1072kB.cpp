#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int ans=-1,n,d,l=0,ans2=0,j,k=0,i;
    cin >> n >> d;
    pair<int, int>a[n+2];
    for ( i=0; i<n; i++)
        cin >> a[i].first >> a[i].second;
    sort(a, a+n);
    for (i=0; i<n; i++)
    {
        while(k<n && abs(a[i].first - a[k].first) < d)
        {
            ans2+= a[k].second;
            k++;
        }
        ans = max(ans2,ans);
        //cout<<ans<<endl;
        ans2-=a[i].second;
        //cout<<o<<endl;
    }
    cout << ans;
}
