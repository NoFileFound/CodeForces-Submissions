#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

struct segment
{
    int x1, y1, x2, y2;
};

int main()
{
    vector<segment> ver, hoz;
    for(int i = 0; i < 4; i++)
    {
        segment a;
        cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
        if(a.x1 == a.x2 && a.y1 != a.y2)
        {
            if(a.y1 > a.y2) swap(a.y1, a.y2);
            ver.push_back(a);
        }
        else if(a.y1 == a.y2 && a.x1 != a.x2)
        {
            if(a.x1 > a.x2) swap(a.x1, a.x2);
            hoz.push_back(a);
        }
        else goto _end;
    }

    if(ver.size() != 2 || hoz.size() != 2) goto _end;
    if(min(ver[0].x1, ver[1].x1) == max(ver[0].x1, ver[1].x1) || min(hoz[0].y1, hoz[1].y1) == max(hoz[0].y1, hoz[1].y1)) goto _end;
    if((ver[0].x1 != min(ver[0].x1, ver[1].x1) && ver[0].x1 != max(ver[0].x1, ver[1].x1))) goto _end;
    if(ver[0].y1 != min(hoz[0].y1, hoz[1].y1) || ver[0].y2 != max(hoz[0].y1, hoz[1].y1)) goto _end;
    if((ver[1].x1 != min(ver[0].x1, ver[1].x1) && ver[1].x1 != max(ver[0].x1, ver[1].x1))) goto _end;
    if(ver[1].y1 != min(hoz[0].y1, hoz[1].y1) || ver[1].y2 != max(hoz[0].y1, hoz[1].y1)) goto _end;
    if((hoz[0].y1 != min(hoz[0].y1, hoz[1].y1) && hoz[0].y1 != max(hoz[0].y1, hoz[1].y1))) goto _end;
    if(hoz[0].x1 != min(ver[0].x1, ver[1].x1) || hoz[0].x2 != max(ver[0].x1, ver[1].x1)) goto _end;
    if((hoz[1].y1 != min(hoz[0].y1, hoz[1].y1) && hoz[1].y1 != max(hoz[0].y1, hoz[1].y1))) goto _end;
    if(hoz[1].x1 != min(ver[0].x1, ver[1].x1) || hoz[1].x2 != max(ver[0].x1, ver[1].x1)) goto _end;

    cout << "YES" << endl;
    return 0;
_end:
    cout << "NO" << endl;
    return 0;
}