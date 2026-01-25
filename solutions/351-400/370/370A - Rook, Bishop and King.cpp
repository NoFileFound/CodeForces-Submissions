#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int r1, c1, r2, c2, rok, bsh, kng;
    cin >> r1 >> c1 >> r2 >> c2;
    rok = ((r1 == r2 && c1 == c2) ? 0 : (r1 == r2 || c1 == c2) ? 1 : 2);
    kng = max(abs(r1 - r2), abs(c1 - c2));
    bsh = (((r1 == r2 && c1 == c2) || ((r1 + c1) % 2 != (r2 + c2) % 2)) ? 0 : (abs(r1 - r2) == abs(c1 - c2)) ? 1 : 2);
    cout << rok << ' ' << bsh << ' ' << kng << endl;
    return 0;
}