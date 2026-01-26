#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int add_to_maximum(int x, int mx, bool tie)
{
    return x == mx ? tie ? 1 : 0 : mx - x + 1;
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int a, b, c, mx;
        cin >> a >> b >> c;
        mx = max(a, max(b, c));

        bool tie = ((a == mx) + (b == mx) + (c == mx) > 1);
        cout << add_to_maximum(a, mx, tie) << ' ' << add_to_maximum(b, mx, tie) << ' ' << add_to_maximum(c, mx, tie) << endl;
    }

    return 0;
}