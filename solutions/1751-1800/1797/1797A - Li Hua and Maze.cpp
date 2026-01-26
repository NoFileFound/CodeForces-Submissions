#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int solve(int x, int y, int n, int m)
{
    int d = 4;
    if(x == 1) d--;
    if(x == n) d--;
    if(y == 1) d--;
    if(y == m) d--;
    return d;
}

int main()
{
    int T, n, m, x1, y1, x2, y2;
    cin >> T;
    while(T--)
    {
        cin >> n >> m >> x1 >> y1 >> x2 >> y2;
        cout << min(solve(x1, y1, n, m), solve(x2, y2, n, m)) << endl;
    }

    return 0;
}