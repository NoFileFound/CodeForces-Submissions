#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, a[100069];

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > a[0] && a[i] < a[n - 1]) ans++;
    }

    cout << ans << endl;
    return 0;
}