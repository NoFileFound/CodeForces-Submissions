#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, k, cnt[26];
    string s;
    cin >> n >> k >> s;
    memset(cnt, 0, sizeof cnt);
    for(int i = 0; i < s.size(); i++) cnt[s[i] - 'a']++;
    for(int i = 0; i < 26; i++)
    {
        if(cnt[i] > k)
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}