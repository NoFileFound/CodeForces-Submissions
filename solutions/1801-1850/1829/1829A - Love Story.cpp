#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

string love = "codeforces";
int T, ans = 0;

int main()
{
    cin >> T;
    while(T--)
    {
        string s;
        cin >> s;
        for(int i = 0; i < s.size(); i++)
            if(s[i] != love[i]) ans++;

        cout << ans << endl;
        ans = 0;
    }

    return 0;
}