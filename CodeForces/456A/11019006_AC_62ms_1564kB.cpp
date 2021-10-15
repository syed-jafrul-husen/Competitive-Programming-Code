#include<bits/stdc++.h>
#define ll long long
using namespace std;


struct db
{
    ll a,b;
};

bool cmp(db x, db y)
{
    if(x.b>y.b) return true;
    else if(x.b==y.b && x.a<y.a) return true;
    return false;
}

int main()
{
    ll i,a,n,c=0;
    scanf("%lld",&n);
    db arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%lld %lld",&arr[i].a,&arr[i].b);
    }

    sort(arr,arr+n,cmp);

    //for(i=0;i<n;i++)
        //printf("%lld - %lld\n",arr[i].a,arr[i].b);

    for(ll i=0;i<n-1;i++)
    {
        if(arr[i].a<arr[i+1].a && arr[i].b>arr[i+1].b)
            c++;
    }

    if(c>=1)
        printf("Happy Alex\n");
    else
        printf("Poor Alex\n");
}
