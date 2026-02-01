#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool solve(int n, int m)
{
    if(n == m) return true;
    if(n < m || n % 3) return false;
    return solve(n / 3, m) || solve((n / 3) * 2, m);
}

int main()
{
    int T, n, m;
    cin >> T;
    while(T--)
    {
        cin >> n >> m;
        cout << (solve(n, m) ? "YES" : "NO") << endl;
    }

    return 0;
}