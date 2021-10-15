#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool endsWith(std::string mainStr, std::string toMatch)
{
    auto it = toMatch.begin();
    return mainStr.size() >= toMatch.size() &&
            std::all_of(std::next(mainStr.begin(),mainStr.size() - toMatch.size()), mainStr.end(), [&it](const char & c){
                return ::tolower(c) == ::tolower(*(it++))  ;
    } );
}

int main()
{
    ll n,i,j,k,male=0,female=0,valid=1,adj=0,noun=0,verb=0;
    string s,s2="";
    vector<string>vt;
    getline(cin,s);
    ll sz = s.size();
    for(i=0; i<sz; i++)
    {
        if(s[i]==' ' && s2.size()>0)
        {
            vt.push_back(s2);
            s2 = "";
        }
        else
            s2+=s[i];
    }
    if(s2.size()>0)
    {
        vt.push_back(s2);
    }
    sz = vt.size();
/**
adj:  lios    liala
noun: etr     etra
verb: initis  inites
adj(0/more) noun verb(0/more)
**/
    for(i=0; i<sz; i++)
    {
        if( endsWith(vt[i],"lios") )
        {
            male = 1;
            if(noun>0 || verb>0)
                valid = 0;
            ++adj;
        }
        else if( endsWith(vt[i],"liala") )
        {
            female = 1;
            if(noun>0 || verb>0)
                valid = 0;
            ++adj;
        }
        else if( endsWith(vt[i],"etr") )
        {
            male = 1;
            ++noun;
            if(verb>0)
                valid = 0;
        }
        else if( endsWith(vt[i],"etra") )
        {
            female = 1;
            ++noun;
            if(verb>0)
                valid = 0;
        }
        else if( endsWith(vt[i],"initis") )
        {
            if(noun==0)
                valid = 0;
            male = 1;
            ++verb;
        }
        else if( endsWith(vt[i],"inites") )
        {
            if(noun==0)
                valid = 0;
            female = 1;
            ++verb;
        }
        else
            valid = 0;
    }
    //cout<<noun<<" "<<adj<<" "<<verb<<endl;
    if(noun+adj+verb==1 && vt.size()==1)
        cout<<"YES"<<endl;
    else if(valid==1 && ((female&male)==0) && noun==1 )
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}


