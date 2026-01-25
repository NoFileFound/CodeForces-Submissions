#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, k, a[55];
    cin >> n >> k;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    if(k > n)
    {
        cout << -1 << endl;
        return 0;
    }

    sort(a, a + n);
    cout << a[n - k - 1] << ' ' << 0 << endl;
    return 0;
}