#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    string s;
    cin >> s;
    cout << 26 * (s.size() + 1) - s.size() << endl;
    return 0;
}