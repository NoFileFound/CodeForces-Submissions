#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, ans = 0;
    string s;
    cin >> n >> s;
    for(int i = 0; i < s.size() - 2; i++)
    {
        if(s[i] == s[i + 1] && s[i + 1] == s[i + 2] && s[i] == 'x') ans++;
    }

    cout << ans << endl;
    return 0;
}