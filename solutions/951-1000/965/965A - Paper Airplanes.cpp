#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int k, n, s, p;
    cin >> k >> n >> s >> p;
    cout << ((((n + s - 1) / s) * k) + p - 1) / p << endl;
    return 0;
}