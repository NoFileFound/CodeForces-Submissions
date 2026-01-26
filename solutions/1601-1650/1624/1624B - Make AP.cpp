#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, a, b, c;
    cin >> T;
    while(T--)
    {
        cin >> a >> b >> c;
        cout << ((b * 2 - c) > 0 && (b * 2 - c) % a == 0 || (a + c) % (b * 2) == 0 || (b * 2 - a) > 0 && (b * 2 - a) % c == 0 ? "YES" : "NO") << endl;
    }

    return 0;
}