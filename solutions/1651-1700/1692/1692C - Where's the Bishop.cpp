#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    string s[8];
    cin >> T;
    while(T--)
    {
        for(int i = 0; i < 8; i++)
            cin >> s[i];

        for(int i = 0; i < 8; i++)
        {
            for(int j = 0; j < 8; j++)
            {
                if(s[i][j] == '#' && s[i - 1][j - 1] == '#' && s[i - 1][j + 1] == '#' && s[i + 1][j - 1] == '#' && s[i + 1][j + 1] == '#')
                {
                    cout << i + 1 << ' ' << j + 1 << endl;
                    continue;
                }
            }
        }
    }

    return 0;
}