#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int a[100069];

int main()
{
    int n, t;
    cin >> n >> t;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int sum = 0, x = 0, ans = 0;
    for(int i = 0; i < n; i++)
    {
        sum += a[i];
        while(sum > t)
        {
            sum -= a[x];
            x++;
        }

        ans = max(ans, i - x + 1);
    }

    cout << ans << endl;
    return 0;
}