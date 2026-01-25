#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int m, d, days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> m >> d;
    d--;
    cout << (d + days[m - 1] + 6) / 7 << endl;
    return 0;
}