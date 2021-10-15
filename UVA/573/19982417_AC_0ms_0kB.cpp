#include<bits/stdc++.h>
using namespace std;

int main()
{
    int w,y,z;
    float x;
    while(1)
    {
        cin>>w>>x>>y>>z;
        if(w==0)
            break;
        int d=1,flag = 0;
      float parcent = (x/100.0)*z;
      float IH = 0;
      // cout<<d<<" "<<IH<<" "<<DC<<" "<<HAC<<" "<<HAS<<endl;
        while(1)
        {
            IH = IH+x;
            if(x>0)
                x = x-parcent;
            if(IH>w)
            {
                flag = 0;
                break;
            }
            IH = IH-y;
        //    cout<<d<<" "<<IH<<" "<<DC<<" "<<HAC<<" "<<HAS<<endl;
            if(IH<0)
            {
                flag = 1;
                break;
            }
            ++d;
        }
        if(!flag)
            cout<<"success on day "<<d<<endl;
        else
            cout<<"failure on day "<<d<<endl;
    }
}
