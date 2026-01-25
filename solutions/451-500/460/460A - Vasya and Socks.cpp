#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    cout << n + ceil(n / (m - 1.0)) - 1 << endl;
    return 0;
}