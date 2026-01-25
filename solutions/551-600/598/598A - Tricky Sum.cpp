#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long T, n;
    cin >> T;
    while(T--)
    {
        cin >> n;
        cout << (n * (n + 1) / 2) - 2 * ((2 << (long long)log2(n)) - 1) << endl;
    }

    return 0;
}