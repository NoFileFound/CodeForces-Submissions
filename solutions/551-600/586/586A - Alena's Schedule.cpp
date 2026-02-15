#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, a[100];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int ans = count(a, a + n, 1);
    for(int i = 0; i < n - 2; i++)
    {
        if(a[i] == 1 && a[i + 1] == 0 && a[i + 2] == 1) ans++;
    }

    cout << ans << endl;
    return 0;
}