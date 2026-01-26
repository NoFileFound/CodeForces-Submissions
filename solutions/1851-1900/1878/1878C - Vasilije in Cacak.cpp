#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    long long T, n, k, x;
    cin >> T;
    while(T--)
    {
        cin >> n >> k >> x;
        long long mi = k * (k + 1) / 2;
        long long ma = k * (n * 2 - k + 1) / 2;
        cout << (mi <= x && x <= ma ? "YES" : "NO") << endl;
    }

    return 0;
}