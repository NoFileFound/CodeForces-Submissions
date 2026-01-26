#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, a, b, c, r;
    cin >> T;
    while(T--)
    {
        cin >> a >> b >> c >> r;
        cout << max(0, max(a, b) - min(a, b) - max(0, min(max(a, b), c + r) - max(min(a, b), c - r))) << endl;
    }

    return 0;
}