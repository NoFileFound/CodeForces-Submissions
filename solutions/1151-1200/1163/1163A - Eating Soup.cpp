#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    cout << (m == 0 ? 1 : min(m, n - m)) << endl;
    return 0;
}