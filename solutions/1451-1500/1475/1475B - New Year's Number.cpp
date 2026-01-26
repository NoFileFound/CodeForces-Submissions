#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n;
    cin >> T;
    while(T--)
    {
        cin >> n;
        cout << (n < 2020 ? "NO" : (n % 2020 <= n / 2020 ? "YES" : "NO")) << endl;
    }

    return 0;
}