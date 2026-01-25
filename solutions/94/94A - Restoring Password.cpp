#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    string s;
    cin >> s;
    unordered_map<string, int> mp;
    for(int i = 0; i < 10; i++)
    {
        string s;
        cin >> s;
        mp[s] = i;
    }

    for(int i = 0; i < 8; i++)
        cout << mp[s.substr(i * 10, 10)];

    cout << endl;
    return 0;
}