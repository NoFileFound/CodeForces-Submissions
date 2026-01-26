#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n, s, t;
    cin >> T;
    while(T--)
    {
        cin >> n >> s >> t;
        cout << max(min(t, n - s), min(s, n - t)) + 1 << endl;
    }

    return 0;
}