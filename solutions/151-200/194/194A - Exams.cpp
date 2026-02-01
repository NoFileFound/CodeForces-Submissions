#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    cout << max(0, (5 * n - k) - 2 * n) << endl;
    return 0;
}