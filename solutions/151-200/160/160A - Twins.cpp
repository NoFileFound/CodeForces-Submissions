#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, a[101], p[101], sum = 0;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    sum /= 2;
    sort(a, a + n, greater<int>());
    p[0] = a[0];
    for (int i = 1; i < n; i++)
        p[i] = p[i - 1] + a[i];

    cout << (upper_bound(p, p + n, sum) - p) + 1 << endl;
    return 0;
}