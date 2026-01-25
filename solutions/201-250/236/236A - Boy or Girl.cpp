#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    string s;
    cin >> s;
    set<char> st;
    for(int i = 0; i < s.size(); i++) st.insert(s[i]);
    cout << (st.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << endl;
    return 0;
}