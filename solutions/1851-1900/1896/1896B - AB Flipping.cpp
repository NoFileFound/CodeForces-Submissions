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
        int l = 0, r = n - 1;
        while(l < n && s[l] == 'B') l++;
        while(r >= 0 && s[r] == 'A') r--;
        cout << max(0, r - l) << endl;
    }

    return 0;
}