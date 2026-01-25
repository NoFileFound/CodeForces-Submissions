#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    string s, word = "hello";
    int j = 0;
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == word[j]) j++;
    }
    cout << (j == word.size() ? "YES" : "NO") << endl;
    return 0;
}