#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n;
    cin >> n;

    /// n^2 + n - 2T = 0
    double equ = (-1 + sqrt(1 + 8 * n)) / 2;
    cout << (equ == round(equ) ? "YES" : "NO") << endl;
    return 0;
}