#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, a[200];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    for(int i = 0; i < n; i++)
        cout << a[i] << ' ';
    return 0;
}