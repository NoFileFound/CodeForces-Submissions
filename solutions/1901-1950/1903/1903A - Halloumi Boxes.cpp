#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n, k, a[169];
    cin >> T;
    while(T--)
    {
        cin >> n >> k;
        for(int i = 0; i < n; i++)
            cin >> a[i];

        cout << (k == 1 && !is_sorted(a, a + n) ? "NO" : "YES") << endl;
    }

    return 0;
}