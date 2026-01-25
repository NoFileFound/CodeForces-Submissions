#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
 
string s;
long long ans = 0;
unordered_map<char, int> cnt;
 
int main()
{
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++)
        cnt[s[i]]++;
 
    for(auto &p : cnt)
    {
        long long f = p.second;
        ans += f * f;
    }
 
    cout << ans << endl;
    return 0;
}