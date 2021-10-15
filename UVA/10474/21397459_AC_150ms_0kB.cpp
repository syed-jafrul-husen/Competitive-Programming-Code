#include<bits/stdc++.h>
using namespace std;

#define ll long long

int binarySearch(int ar[],int n,int element)
{
    int beg = 0,en = n-1,index = -1;
    while(beg<=en)
    {
        int mid = (beg+en)/2;
        if(element==ar[mid])
        {
            index = mid;//lower & Upper bound
            en = mid-1; //Lower bound
            //cout<<"INDEX "<<mid<<endl;
        }
        else if(element>ar[mid])
            beg = mid+1;
        else if(element<ar[mid])
            en = mid-1;
    }
    return index;
}
int main()
{
    int n,m,i,j,k,c=0,cnt=0,t,te=0,q;
    while(1)
    {
        cin>>n>>q;
        if(n==0 && q==0)
            break;
        int a[100005];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        printf("CASE# %d:\n",++te);
        while(q--)
        {
            cin>>t;
            m = binarySearch(a,n,t);
           // cout<<m<<endl<<endl;
            if(m!=-1)
                printf("%d found at %d\n",t,m+1);
            else
                printf("%d not found\n",t);
        }

    }

}
