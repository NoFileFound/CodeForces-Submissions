#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        string ans = "";
        char ch;
        for(int i = 0; i < 8 * 8; i++)
        {
            cin >> ch;
            if(ch != '.') ans += ch;
        }

        cout << ans << endl;
    }

    return 0;
}