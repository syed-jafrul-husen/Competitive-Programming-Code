#include<bits/stdc++.h>
using namespace std;

struct rectangle
{
    double x1, x2, y1, y2;
};

int main()
{
    rectangle rects[10];
    int n,i;
    for (i = 0; ; i++)
    {
        char c;
        cin >> c;
        if (c == '*')
        {
            n = i;
            break;
        }
        else if (c == 'r')
            cin >> rects[i].x1 >> rects[i].y1 >> rects[i].x2 >> rects[i].y2;
    }
    for (i = 1; ; i++)
    {
        double x, y;
        int contained = 1;
        cin >> x >> y;
        if (x == 9999.9 && y == 9999.9)
            break;
        for (int j = 0; j < n; j++)
        {
            if (x > rects[j].x1 && x < rects[j].x2 &&  y > rects[j].y2 && y < rects[j].y1)
            {
                cout << "Point " << i << " is contained in figure " << j + 1 << endl;
                contained = 0;
            }
        }
        if (contained)
            cout << "Point " << i << " is not contained in any figure" << endl;
    }
}
