#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        string s;
        cin >> s;
        cout << (count(s.begin(), s.end(), 'N') != 1 ? "YES" : "NO") << endl;
    }

    return 0;
}