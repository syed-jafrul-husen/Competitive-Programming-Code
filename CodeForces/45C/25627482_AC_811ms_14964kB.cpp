#include <bits/stdc++.h>
using namespace std;


set< pair<int, int> > S;
set< pair<int, int> >::iterator it;

int a[220000], prv[220000], nxt[220000];
char s[220000];

int main()
{
    int n,i,j,l,r;
    cin>>n>>s;
    for(i=1; i<=n; i++)
        cin>>a[i];
    for (i=1; i <=n; i++)
        prv[i] = i-1, nxt[i] = i+1;
    for(i=1; i<n; i++)
    {
        if (s[i] != s[i-1])
            S.insert(make_pair(abs(a[i+1] - a[i]), i));
    }
    vector<pair<int, int> > ans;
    while (!S.empty())
    {
        it = S.begin();
        i = it->second, j = nxt[i];
        l = prv[i], r = nxt[j];
        if (l > 0 && s[l-1] != s[i-1])
            S.erase(make_pair(abs(a[l] - a[i]), l));
        if (r <= n && s[r-1] != s[j-1])
            S.erase(make_pair(abs(a[r] - a[j]), j));
        if (l > 0 && r <= n && s[l-1] != s[r-1])
            S.insert(make_pair(abs(a[r] - a[l]), l));
        if (l > 0) nxt[l] = r;
        if (r <= n) prv[r] = l;
        ans.push_back(make_pair(i, j));
        S.erase(it);
    }
    n = ans.size();
    cout << n << endl;
    for(i=0; i<n; i++)
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    return 0;
}
