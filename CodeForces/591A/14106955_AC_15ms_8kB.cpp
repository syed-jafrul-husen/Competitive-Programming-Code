#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sc scanf
#define pf printf
#define lopi for(i=0; i<n; i++)

ll arr[7];

int main()
{
    double a,b,c,d,e,f;
    cin>>a>>b>>c;

    d = (a/((b+c)*1.0))*b;
    e = (a/((b+c)*1.0))*c;
    f = a-e;
    cout<<f<<endl;
}
