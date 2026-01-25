#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int cnt[26] = {0};
    string a, b, c;
    cin >> a >> b >> c;
    for(int i = 0; i < a.size(); i++) cnt[a[i] - 'A']++;
    for(int i = 0; i < b.size(); i++) cnt[b[i] - 'A']++;
    for(int i = 0; i < c.size(); i++) cnt[c[i] - 'A']--;
    for(int i = 0; i < 26; i++)
    {
        if(cnt[i] != 0)
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}