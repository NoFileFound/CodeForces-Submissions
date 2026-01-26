#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    cout << (m == 1 ? n - 1 : 1LL * n * (m - 1)) << endl;
    return 0;
}