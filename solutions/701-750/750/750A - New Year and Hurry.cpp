#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    cout << min(n, (int)((-1 + sqrt(1 + 8.0 * (240 - k) / 5)) / 2)) << endl;
    return 0;
}