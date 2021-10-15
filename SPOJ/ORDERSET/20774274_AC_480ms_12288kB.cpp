#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> st;


int main()
{
    st s;
    long long t,i,j,k,type;
    scanf("%lld",&t);
    while(t--)
    {
        char ch;
        scanf(" %c%lld",&ch,&k);
        if(ch=='I')
        {
            s.insert(k);
        }
        else if(ch=='D')
        {
            s.erase(k);
        }
        else if(ch=='K')
        {
            --k;
            //ll c = *s.find_by_order(k);
            if(s.find_by_order(k)!=s.end())
            {
                long long c = *s.find_by_order(k);
                printf("%lld\n",c);
            }
            else
                printf("invalid\n");

        }
        else
        {
            long long c = s.order_of_key(k);
            printf("%lld\n",c);
        }

    }
}
