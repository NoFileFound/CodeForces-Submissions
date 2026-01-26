#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    long long T, n, a, b;
    cin >> T;
    while(T--)
    {
        cin >> n >> a >> b;
        long long k = max(0LL, min({b - a + 1, n, b}));
        cout << n * a + k * (2 * (b - a) - k + 1) / 2 << endl;
    }

    return 0;
}