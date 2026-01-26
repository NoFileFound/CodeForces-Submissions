#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int a = (n / 100000) % 10;
    int b = (n / 10000) % 10;
    int c = (n / 1000) % 10;
    int d = (n / 100) % 10;
    int e = (n / 10) % 10;
    int f = n % 10;

    cout << (a + b + c == d + e + f ? "YES" : "NO") << endl;
}


int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        solve();
    }
    return 0;
}