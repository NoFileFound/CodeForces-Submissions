#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    long long T, n, k;
    cin >> T;
    while(T--)
    {
        cin >> n >> k;
        cout << (n % __gcd(2LL, k) == 0 ? "YES" : "NO") << endl;
    }

    return 0;
}