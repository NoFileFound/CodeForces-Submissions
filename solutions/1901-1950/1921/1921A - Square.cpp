#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n = 4, x, y, minX = INT_MAX, maxX = INT_MIN, minY = INT_MAX, maxY = INT_MIN;
        while(n--)
        {
            cin >> x >> y;
            minX = min(minX, x);
            maxX = max(maxX, x);
            minY = min(minY, y);
            maxY = max(maxY, y);
        }

        int ans = max(maxX - minX, maxY - minY);
        cout <<  ans * ans << endl;
    }

    return 0;
}