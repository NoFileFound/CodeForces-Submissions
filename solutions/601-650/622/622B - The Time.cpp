#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    string s;
    int x;
    cin >> s >> x;
    int h = (s[0] - '0') * 10 + (s[1] - '0');
    int m = (s[3] - '0') * 10 + (s[4] - '0');
    int r1 = h * 60 + m + x;
    r1 %= 1440;
    cout << setw(2) << setfill('0') << r1 / 60 << ":" << setw(2) << setfill('0') << r1 % 60 << endl;
    return 0;
}