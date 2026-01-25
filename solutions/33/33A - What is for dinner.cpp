#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    long long n, m, k, a[1069];
    memset(a, 9000000, sizeof a);
    cin >> n >> m >> k;
    for(int i = 0; i < n; i++)
    {
        long long x, y;
        cin >> x >> y;
        a[x] = min(a[x], y);
    }

    long long sum = accumulate(a + 1, a + 1 + m, 0LL);
    cout << min(sum, k) << endl;
    return 0;
}