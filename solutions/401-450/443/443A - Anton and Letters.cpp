#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

set<char> se;
string s;
int ans = 0;

int main() {
    getline(cin, s);
    for(int i = 0; i < s.size(); i++)
    {
        se.insert(s[i]);
    }

    for(auto x : se)
    {
        if(isalpha(x)) ans++;
    }

    cout << ans << endl;
    return 0;
}