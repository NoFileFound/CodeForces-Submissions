#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, x, n, m;
    cin >> T;
    while(T--)
    {
        cin >> x >> n >> m;
        while(n > 0 && x > 20)
        {
            x /= 2;
            x += 10;
            n--;
        }

        cout << (x <= m * 10 ? "YES" : "NO") << endl;
    }

    return 0;
}