#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n, a[69];
    cin >> T;
    while(T--)
    {
        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> a[i];

        cout << (accumulate(a, a + n, 0) % 2 == 0 ? "YES" : "NO") << endl;
    }

    return 0;
}