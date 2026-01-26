#include <bits/stdc++.h>
#define endl '\n'
#define SZ(x) (int)(x.size())
using namespace std;

int main()
{
    string s;
    cin >> s;
    cout << min(SZ(s), 2 * count(s.begin(), s.end(), 'a') - 1) << endl;
    return 0;
}