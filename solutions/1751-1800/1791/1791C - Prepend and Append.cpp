#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n;
    string s;
    cin >> T;
    while(T--)
    {
        cin >> n >> s;
        int l = 0, r = s.size() - 1;
        while(l < r && s[l] != s[r]) l++, r--;
        cout << r - l + 1 << endl;
    }

    return 0;
}