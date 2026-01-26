#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    long long T, n;
    cin >> T;
    while(T--)
    {
        cin >> n;
        cout << 5 * max(3LL, (n + 1) / 2) << endl;
    }

    return 0;
}