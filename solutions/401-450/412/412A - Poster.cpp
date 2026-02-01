#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    int dir = (k - 1 <= n - k) ? -1 : 1, l = (dir == -1 ? 1 : n), r = (dir == -1 ? n : 1);
    while(k != l)
    {
        cout << (dir == -1 ? "LEFT" : "RIGHT") << endl;
        k += dir;
    }

    for(int i = l; i != r; i -= dir)
    {
        cout << "PRINT " << s[i - 1] << endl;
        cout << (dir == -1 ? "RIGHT" : "LEFT") << endl;
    }

    cout << "PRINT " << s[r - 1] << endl;
    return 0;
}