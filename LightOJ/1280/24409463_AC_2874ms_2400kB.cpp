#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct db
{
    double mark,total;
};

double Mid;
db ar[20000+2];

bool cmp(db a, db b)
{
    return (a.mark - Mid*a.total)  > (b.mark - Mid*b.total);
}

bool check(double m, ll n, ll use)
{
    ll i;
    Mid = m/100.0;
    sort(ar, ar+n, cmp);
    double Got = 0.0, Total = 0.0;
    for(i=0; i<use; i++)
    {
        Got+=ar[i].mark;
        Total+=ar[i].total;
    }
    double avg = (Got/Total)*100;
    return avg >= m;
}

double binarySearch(ll n,ll m)
{
    double b=0.0,e=100.0,mid;
    ll use = n-m;
    double ans=0.0;
    ll t = 100;
    while(t--)
    {
        mid = (b+e)/2.0;
        if( check(mid, n, use) )
        {
            b = mid;
            ans = max(ans, mid);
        }
        else
            e = mid;
    }
    return ans;
}

int main()
{
    ll t,i,j,n,m;

    cin>>t;
    for(j=1; j<=t; j++)
    {
        cin>>n>>m;

        for(i=0; i<n; i++)
        {
            cin>>ar[i].mark>>ar[i].total;
        }
        printf("Case %lld: %.8f\n", j,binarySearch(n,m));

    }
}
