#include<bits/stdc++.h>
using namespace std;

#define INF 100000005
long long cnt = 0;

void Merge(int a[],int l,int m,int r)
{

    int i,j,k,n1,n2;
    n1 = m-l+2;
    n2 = r-m+1;
    if(r-l<=0)
        return;

    int L[n1];
    int R[n2];
    j = 0;
    for(i=l; i<=m; i++)
    {
        L[j] = a[i];
        j++;
    }
    L[m-l+1] = INF;
    j = 0;
    for(i=m+1; i<=r; i++)
    {
        R[j] = a[i];
        j++;
    }
    R[r-m] = INF;
    i = 0;
    j = 0;
    for(k=l; k<=r; k ++)
    {
        if(L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            cnt = cnt+m-l+1-i;
            a[k] = R[j];
            j++;
        }
    }
}

void mergeSort(int a[], int l, int r)
{
    if(l<r)
    {
        int m = (l+r) / 2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        Merge(a,l,m,r);
    }
}

int main()
{
    int t,n;
    int a[100005];
    cin >> t;
    while(t--)
    {
        cnt = 0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        mergeSort(a,0,n-1);
        cout<<cnt<<endl;
    }
    return 0;
}
