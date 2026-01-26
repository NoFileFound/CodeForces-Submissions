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
        cout << (s.size() % 2 == 0 && s.substr(0, s.size() / 2) == s.substr(s.size() / 2, s.size() / 2) ? "YES" : "NO") << endl;
    }
    
    return 0;
}