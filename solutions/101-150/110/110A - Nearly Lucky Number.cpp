#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int ans = 0;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '4' || s[i] == '7')
        {
            ans++;
        }
    }

    cout << (ans == 4 || ans == 7 ? "YES" : "NO") << endl;
    return 0;
}