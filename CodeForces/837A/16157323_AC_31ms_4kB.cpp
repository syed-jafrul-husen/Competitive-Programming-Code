#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k,l,c;
    cin>>n;
    getchar();
    string str;
    getline(cin,str);
    n = str.size();
    //cout<<n<<endl;
    int ma = 0;
    c = 0;
    for(i=0; i<n; i++)
    {
        if(str[i]==' ')
        {
            if(c>ma)
                ma = c;
            c = 0;
        }
        else if(str[i]>='A' && str[i]<='Z')
            ++c;
           // cout<<c<<endl;
    }
    if(c>ma)
        ma = c;
    cout<<ma<<endl;
}
