#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,j,k,n,m,q;
    cin>>n;
    ll a[n+2];
    set<ll>st;
    set<ll>::iterator it;
    for(i=0; i<n; i++)
    {
        cin>>k;
        st.insert(k);
    }
    cin>>q;
    while(q--)
    {
        cin>>k;

        it = st.lower_bound(k);
        if(it!=st.begin())
        {
            if(*it<k)
                cout<<*it<<" ";
            else if(it!=st.begin())
            {
                --it;
                cout<<*it<<" ";
            }
            else
                cout<<"X"<<" ";
        }
        else
            cout<<"X"<<" ";
        it = st.upper_bound(k);
        if(it!=st.end())
        {
            cout<<*it<<endl;
        }
        else
            cout<<"X"<<endl;

    }
}

