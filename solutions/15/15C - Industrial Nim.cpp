#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

long long xorTo(long long n)
{
    return n < 0 ? 0 : (n % 4 == 0 ? n : n % 4 == 1 ? 1 : n % 4 == 2 ? n + 1 : 0);
}

int main()
{
    long long n, player = 0;
    cin >> n;
    while(n--)
    {
        long long x, y;
        cin >> x >> y;
        player ^= (xorTo(x + y - 1) ^ xorTo(x - 1));
    }

    cout << (player == 0 ? "bolik" : "tolik") << endl;
    return 0;
}