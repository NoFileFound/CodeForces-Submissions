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
        int p = s.find_first_of('a');
        if(p == 0)
        {
            s[0] = '#';
            p = s.find_first_of('a');
            s[0] = 'a';
        }

        if(p > 0 && p != s.size() - 1)
        {
            cout << s.substr(0, p) << ' ' << 'a' << ' ' << s.substr(p + 1) << endl;
        }
        else
        {
            cout << s[0] << ' ' << s.substr(1, s.size() - 2) << ' ' << s[s.size() - 1] << endl;
        }
    }

    return 0;
}