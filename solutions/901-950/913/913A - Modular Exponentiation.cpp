#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    cout << (n >= 64 ? m : (m & ((1LL << n) - 1))) << endl;
    return 0;
}