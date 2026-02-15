#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, q, a[100069];

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];

    sort(a + 1, a + n + 1);
    cin >> q;
    while(q--)
    {
        int x;
        cin >> x;
        cout << upper_bound(a + 1, a + n + 1, x) - (a + 1) << endl;
    }

    return 0;
}