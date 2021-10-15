#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,i,j,k,l;
    cin>>n;

    ll a[n+2];
    vector<ll>vt;
    vector<ll>vt2;
    vector<ll>vt3;
    cin>>k;
    vt2.push_back(k);
    for(i=1; i<n; i++)
    {
        cin>>j;
        if(j==k)
            vt2.push_back(j);
        else if(j<k)
            vt.push_back(j);
        else
            vt3.push_back(j);
    }

    ll minIndex,maxValue;
    n = vt.size();
    for(i=0; i<n; i++)
    {
        ll minValue = vt[i];
        ll minIndex = i;
        for(j=i+1; j<n; j++)
        {
            if(minValue>vt[j])

            {
                minIndex = j;
                minValue =  vt[j];
            }
        }
        swap (vt[i],vt[minIndex]);
    }

    n = vt3.size();
    for(i=0; i<n; i++)
    {
        ll minValue = vt3[i];
        ll minIndex = i;
        for(j=i+1; j<n; j++)
        {
            if(minValue>vt3[j])

            {
                minIndex = j;
                minValue =  vt3[j];
            }
        }
        swap (vt3[i],vt3[minIndex]);
    }

    n = vt.size();
    for(i=n-1; i>=0; i--)
        cout<<vt[i]<<" ";

    n = vt2.size();
    for(i=0; i<n; i++)
        cout<<vt2[i]<<" ";

    n = vt3.size();
    for(i=0; i<n; i++)
        cout<<vt3[i]<<" ";
}
