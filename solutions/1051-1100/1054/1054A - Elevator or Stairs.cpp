#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int x, y, z, t1, t2, t3;
    cin >> x >> y >> z >> t1 >> t2 >> t3;
    cout << (abs(x - y) * t1 >= abs(x - z) * t2 + abs(x - y) * t2 + t3 * 3 ? "YES" : "NO") << endl;
    return 0;
}