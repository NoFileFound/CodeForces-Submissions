#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, x, y, z, sX = 0, sY = 0, sZ = 0;
    cin >> n;
    while(n--)
    {
        cin >> x >> y >> z;
        sX += x;
        sY += y;
        sZ += z;
    }

    cout << (sX == sY && sY == sZ && sX == 0 ? "YES" : "NO") << endl;
    return 0;
}