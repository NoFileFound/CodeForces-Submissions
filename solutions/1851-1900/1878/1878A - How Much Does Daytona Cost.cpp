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

        cout << (find(a, a + n, k) != (a + n) ? "YES" : "NO") << endl;
    }

    return 0;
}