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
    string s;
    cin >> s;
    vector<int> pi = prefix_function(s);
    int n = s.size();
    int per = n - pi[n - 1];
    cout << (n % per == 0 ? per : n) << endl;
    return 0;
}