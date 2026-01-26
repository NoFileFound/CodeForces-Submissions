#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        string s;
        bool flag = false;
        cin >> s;
        for(int i = 0; i < (s.size() / 2) - 1; i++)
        {
            if(s[i] != s[i + 1])
            {
                flag = true;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}