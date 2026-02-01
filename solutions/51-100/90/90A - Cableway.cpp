#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int r, g, b;
    cin >> r >> g >> b;
    cout << 30 + max({r ? 0 + 3 * ((r + 1) / 2 - 1) : -1, g ? 1 + 3 * ((g + 1) / 2 - 1) : -1, b ? 2 + 3 * ((b + 1) / 2 - 1) : -1}) << endl;
    return 0;
}