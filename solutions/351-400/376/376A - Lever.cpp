#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    string s;
    cin >> s;
    long long pos = s.find_first_of('^'), ans = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(isdigit(s[i]))
        {
            ans += (s[i] - '0') * (i - pos);
        }
    }

    cout << (ans == 0 ? "balance" : ans > 0 ? "right" : "left") << endl;
    return 0;
}