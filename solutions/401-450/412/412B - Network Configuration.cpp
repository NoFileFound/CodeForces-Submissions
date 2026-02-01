#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int  n, k, a[120];
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
        cin >> a[i];

    sort(a + 1, a + n + 1);
    cout << a[n - k + 1] << endl;
    return 0;
}