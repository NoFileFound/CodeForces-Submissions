#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int r1 = __gcd(x, y);
    x /= r1;
    y /= r1;

    int resX = a / x;
    int resY = b / y;
    cout << min(resX, resY) * x << ' ' << min(resX, resY) * y << endl;
    return 0;
}