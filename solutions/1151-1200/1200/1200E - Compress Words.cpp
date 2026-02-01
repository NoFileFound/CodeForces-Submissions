#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<int> prefix_function(string s)
{
    vector<int> pi(s.size(), 0);
    for(int i = 1; i < s.size(); i++)
    {
        int j = pi[i - 1];
        while(j > 0 && s[i] != s[j]) j = pi[j - 1];
        if(s[i] == s[j]) j++;
        pi[i] = j;
    }

    return pi;
}

int main()
{
    int n;
    string s, s1;
    cin >> n >> s;
    for(int i = 1; i < n; i++)
    {
        cin >> s1;
        int len = min(s.size(), s1.size());
        string tmp = s1 + '|' + s.substr(s.size() - len);
        s += s1.substr(prefix_function(tmp).back());
    }

    cout << s << endl;
    return 0;
}