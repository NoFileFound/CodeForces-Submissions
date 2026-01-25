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
    for(int i = pi[s.size() - 1]; i > 0; i = pi[i - 1])
    {
        for(int j = 0; j < s.size() - 1; j++)
        {
            if(pi[j] == i)
            {
                cout << s.substr(0, i) << endl;
                return 0;
            }
        }
    }

    cout << "Just a legend" << endl;
    return 0;
}