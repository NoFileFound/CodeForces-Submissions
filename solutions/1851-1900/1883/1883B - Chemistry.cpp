#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n, k, cnt[26];
    string s;
    cin >> T;
    while(T--)
    {
        int ans = 0;
        memset(cnt, 0, sizeof cnt);
        cin >> n >> k >> s;
        for(int i = 0; i < s.size(); i++) cnt[s[i] - 'a']++;
        for(int i = 0; i < 26; i++)
        {
            if(cnt[i] % 2 != 0) ans++;
        }

        cout << (ans - 1 <= k ? "YES" : "NO") << endl;
    }

    return 0;
}