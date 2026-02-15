#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, ans = 0;
    string s;
    cin >> n >> s;
    n--;
    char ch = s[1];
    while(n--)
    {
        cin >> s;
        if(s[0] == ch) ans++;
        ch = s[1];
    }

    cout << ans + 1 << endl;
    return 0;
}