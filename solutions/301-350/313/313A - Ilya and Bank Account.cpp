#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int solve(int n)
{
    int r1 = n / 10;
    int r2 = (n / 100 * 10 + n % 10);
    return max(r1, r2);
}

int main()
{
    int n;
    cin >> n;
    cout << (n > 0 ? n : solve(n)) << endl;
    return 0;
}