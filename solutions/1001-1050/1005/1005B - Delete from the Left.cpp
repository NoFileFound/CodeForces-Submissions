#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int prefsz = 0;
    for(int i = s.size() - 1, j = t.size() - 1; i >= 0 && j >= 0 && s[i] == t[j]; i--, j--)
    {
        prefsz++;
    }

    cout << (s.size() - prefsz) + (t.size() - prefsz) << endl;
    return 0;
}