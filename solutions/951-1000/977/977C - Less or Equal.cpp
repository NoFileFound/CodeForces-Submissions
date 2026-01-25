#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, k, a[200050];

int main()
{
    cin >> n >> k;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    if(k == 0)
    {
        cout << (a[0] <= 1 ? -1 : 1) << endl;
        return 0;
    }

    if(k <= n - 1)
    {
        cout << (a[k - 1] != a[k] ? a[k - 1] : -1) << endl;
        return 0;
    }

    cout << a[k - 1] << endl;
    return 0;
}