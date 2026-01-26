#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long T, x, y;
    cin >> T;
    while(T--)
    {
        cin >> x >> y;
        cout << (x - y > 1 ? "YES" : "NO") << endl;
    }

    return 0;
}