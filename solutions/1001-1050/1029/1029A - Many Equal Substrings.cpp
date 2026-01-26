#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int prefix_function(string s, int n)
{
    vector<int> pi(s.size(), 0);
    for(int i = 1; i < s.size(); i++)
    {
        int j = pi[i - 1];
        while(j > 0 && s[i] != s[j]) j = pi[j - 1];
        if(s[i] == s[j]) j++;
        pi[i] = j;
    }

    return pi[n - 1];
}

int main()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    cout << s;
    k--;

    s = s.substr(prefix_function(s, n));
    while(k > 0)
    {
        cout << s;
        k--;
    }

    return 0;
}