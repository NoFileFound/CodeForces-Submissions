#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int cnt = 0;
    string s;
    cin >> s;
    for(int i = 0; i < s.size() - 1; i++)
    {
        if(s[i] == s[i + 1])
        {
            cnt++;
            if(cnt == 7) break;
        }
        else
        {
            if(cnt == 6)
            {
                cnt++;
                break;
            }
            cnt = 0;
        }
    }

    if(s[s.size() - 1] == s[s.size() - 2]) cnt++;
    cout << (cnt >= 7 ? "YES" : "NO") << endl;
    return 0;
}