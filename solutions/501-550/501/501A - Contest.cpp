#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    double w = max((3.0 * a) / 10, a - (a / 250.0) * c);
    double z = max((3.0 * b / 10), b - (b / 250.0) * d);
    cout << (w == z ? "Tie" : w > z ? "Misha" : "Vasya") << endl;
    return 0;
}