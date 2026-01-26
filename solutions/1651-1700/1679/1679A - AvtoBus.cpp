#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    unsigned long long T, n;
    cin >> T;
    while(T--)
    {
        cin >> n;
        if(n == 2 || n & 1)
        {
            cout << -1 << endl;
            continue;
        }

        cout << (n + 5) / 6 << ' ' << n / 4 << endl;
    }

    return 0;
}