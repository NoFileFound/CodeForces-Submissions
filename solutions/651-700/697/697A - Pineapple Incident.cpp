#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    long long t, s, x;
    cin >> t >> s >> x;
    cout << ((x == t || (x >= t + s && ((x - t) % s == 0 || (x - t) % s == 1))) ? "YES" : "NO") << endl;
    return 0;
}