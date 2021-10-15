#include<bits/stdc++.h>
using namespace std;

int a[1000000],b[1000000];

int main()
{
    int n,i,j,c=0;
    cin>>n;
    string s[n+2];
    for(i=0; i<n; i++)
    {
        cin>>s[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++){
        if(s[i]==s[j])
            ++c;}a[i] = c;
            c = 0;
    }
    sort(a,a+n);
    cout<<a[n-1]<<endl;

}
