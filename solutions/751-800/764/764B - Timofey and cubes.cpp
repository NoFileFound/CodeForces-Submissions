#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, a[200069];

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 1; i * 2 <= n; i++)
    {
        if(i % 2 == 0) swap(a[i - 1], a[n - i]);
    }

    reverse(a, a + n);
    for(int i = 0; i < n; i++)
        cout << a[i] << ' ';

    return 0;
}