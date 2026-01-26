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
        cout << ((n & (n - 1)) != 0 ? "YES" : "NO") << endl;
    }

    return 0;
}