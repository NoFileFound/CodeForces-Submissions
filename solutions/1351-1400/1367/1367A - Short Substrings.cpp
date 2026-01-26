#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    string s;
    cin >> T;
    while(T--)
    {
        cin >> s;
        string tmp(1, s[0]);
        for(int i = 1; i < s.size(); i++)
        {
            if(s[i] != s[i + 1]) tmp += s[i];
            else tmp += s[++i];
        }

        cout << tmp << endl;
    }

    return 0;
}