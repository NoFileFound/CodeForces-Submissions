#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, d;
    cin >> n;
    d = sqrt(n);
    while(n % d != 0) d--;
    cout << 2 * (d + n / d) << endl;
    return 0;
}