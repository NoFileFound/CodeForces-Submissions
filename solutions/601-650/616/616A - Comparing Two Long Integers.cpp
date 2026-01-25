#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

string remzeroes(string s)
{
    int i = 0;
    while(i < s.size() && s[i] == '0') i++;
    if(i == s.size()) return "0";

    return s.substr(i);
}

int compare(string s, string s1)
{
    s = remzeroes(s);
    s1 = remzeroes(s1);
    if(s.size() == s1.size())
    {
        return (s > s1 ? 1 : s == s1 ? 0 : -1);
    }

    return (s.size() > s1.size() ? 1 : s.size() == s1.size() ? 0 : -1);
}

int main()
{
    string a, b;
    cin >> a >> b;
    int ans = compare(a, b);
    cout << (ans == -1 ? '<' : ans == 0 ? '=' : '>') << endl;
    return 0;
}