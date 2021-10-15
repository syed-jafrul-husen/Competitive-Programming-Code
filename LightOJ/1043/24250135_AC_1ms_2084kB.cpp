#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
double binarySearch(double ab,double ac,double bc,double r)
{
    double beg=0.0,en = ab,ad,ae,de,s1,s2,area1,area2,areaTrapi;
    while(abs(en-beg)>0.0000001)
    {
        ad = (en+beg)/2.0;
        ae = (ac*ad*1.0)/ab;
        de = (ad*bc*1.0)/ab;
 
        s1 = (ad+ae+de)/2.0;
        s2 = (ab+ac+bc)/2.0;
        area1 = sqrt(s1*(s1-ad)*(s1-ae)*(s1-de));
        area2 = sqrt(s2*(s2-ab)*(s2-bc)*(s2-ac));
        areaTrapi = area2-area1;
        //cout<<ad<<endl;
        if( abs((area1/areaTrapi)-r)<0.0000001)
            return ad;
        else if((area1/areaTrapi)<r)
            beg = ad;
        else if((area1/areaTrapi)>r)
            en = ad;
    }
    return ad;
}
 
int main()
{
    ll t,i,n;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        double ab,bc,ac,r;
        cin>>ab>>ac>>bc>>r;
        printf("Case %lld: %.7lf\n",i,binarySearch(ab,ac,bc,r));
    }
}
 
