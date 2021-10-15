#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,i,j,k,c=0,c2=0,num;
    string s;
    cin>>s>>k;

    for(i=0; i<k; i++)
    {
        ll a=0,b=0;
        sort(s.begin(),s.end());
        stringstream geek(s);
        geek >> b;

        string s2 = s;
        reverse(s2.begin(),s2.end());
        stringstream geek2(s2);
        geek2 >> a;

        n = a-b;
        //cout<<a<<" "<<b<<" "<<n<<endl;

        stringstream ss;
        ss << n;
        ss >> s;
    }
    cout<<s<<endl;

}
