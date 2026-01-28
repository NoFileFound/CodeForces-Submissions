#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << (n / 7) * 2 + max(0, n % 7 - 5) << ' ' << (n / 7) * 2 + min(2, n % 7) << endl;
    return 0;
}